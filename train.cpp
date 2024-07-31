#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Class to represent a train
class Train {
public:
    int id;
    string name;
    string station;
    string timing;

    Train(int id, const string& name, const string& station, const string& timing)
        : id(id), name(name), station(station), timing(timing) {}
};

// Class to represent a compartment
class Compartment {
public:
    int id;
    int train_id;
    string type;
    double fare;

    Compartment(int id, int train_id, const string& type, double fare)
        : id(id), train_id(train_id), type(type), fare(fare) {}
};

// Class to represent a passenger
class Passenger {
public:
    string name;
    int age;
    string gender;

    Passenger(const string& name, int age, const string& gender)
        : name(name), age(age), gender(gender) {}
};

// Class to represent a booking
class Booking {
public:
    int id;
    int train_id;
    int compartment_id;
    vector<Passenger> passengers;
    double total_fare;

    Booking(int id, int train_id, int compartment_id, const vector<Passenger>& passengers, double total_fare)
        : id(id), train_id(train_id), compartment_id(compartment_id), passengers(passengers), total_fare(total_fare) {}
};

vector<Train> trains;
vector<Compartment> compartments;
vector<Booking> bookings;

// Function to search trains at a particular station
void searchTrains() {
    string station;
    cout << "Enter station name: ";
    cin.ignore();
    getline(cin, station);

    bool found = false;
    for (const auto& train : trains) {
        if (train.station == station) {
            cout << "Train ID: " << train.id << ", Name: " << train.name << ", Timing: " << train.timing << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No trains found at station " << station << "." << endl;
    }
}

// Function to view ticket fares for a specific train
void viewTicketFares() {
    int train_id;
    cout << "Enter train ID: ";
    cin >> train_id;

    bool found = false;
    for (const auto& comp : compartments) {
        if (comp.train_id == train_id) {
            cout << "Compartment ID: " << comp.id << ", Type: " << comp.type << ", Fare: " << comp.fare << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No compartments found for train ID " << train_id << "." << endl;
    }
}

// Function to book tickets
void bookTickets() {
    int train_id, compartment_id, num_passengers;
    cout << "Enter train ID: ";
    cin >> train_id;
    cout << "Enter compartment ID: ";
    cin >> compartment_id;
    cout << "Enter number of passengers: ";
    cin >> num_passengers;

    vector<Passenger> passengers;
    for (int i = 0; i < num_passengers; ++i) {
        string name, gender;
        int age;
        cout << "Enter passenger " << (i + 1) << " name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter passenger " << (i + 1) << " age: ";
        cin >> age;
        cout << "Enter passenger " << (i + 1) << " gender: ";
        cin.ignore();
        getline(cin, gender);
        passengers.emplace_back(name, age, gender);
    }

    double fare = 0;
    bool compartment_found = false;
    
    for (const auto& comp : compartments) {
        if (comp.id == compartment_id && comp.train_id == train_id) {
            fare = comp.fare;
            compartment_found = true;
            break;
        }
    }

    if (!compartment_found) {
        cout << "Invalid train or compartment ID." << endl;
        return;
    }

    double total_fare = fare * num_passengers;
    static int booking_id = 1;
    Booking new_booking(booking_id++, train_id, compartment_id, passengers, total_fare);
    bookings.push_back(new_booking);

    cout << "Booking successful! Total Fare: " << total_fare << endl;
}

// Function to view details of already booked tickets
void viewBookedTickets() {
    if (bookings.empty()) {
        cout << "No bookings available." << endl;
        return;
    }

    for (const auto& booking : bookings) {
        cout << "Booking ID: " << booking.id << ", Train ID: " << booking.train_id
             << ", Compartment ID: " << booking.compartment_id << ", Total Fare: " << booking.total_fare << endl;
        for (const auto& passenger : booking.passengers) {
            cout << "Passenger Name: " << passenger.name << ", Age: " << passenger.age << ", Gender: " << passenger.gender << endl;
        }
    }
}

// Function to cancel tickets
void cancelTickets() {
    int booking_id;
    cout << "Enter booking ID to cancel: ";
    cin >> booking_id;

    auto it = remove_if(bookings.begin(), bookings.end(), [booking_id](const Booking& b) {
        return b.id == booking_id;
    });

    if (it != bookings.end()) {
        bookings.erase(it, bookings.end());
        cout << "Booking cancelled successfully." << endl;
    } else {
        cout << "Booking not found." << endl;
    }
}

// Main function to provide a menu for the user
int main() {
    // Sample data
    trains.push_back(Train(1, "Express Train", "Station A", "10:00 AM"));
    trains.push_back(Train(2, "Local Train", "Station B", "12:00 PM"));
    compartments.push_back(Compartment(1, 1, "Sleeper", 500));
    compartments.push_back(Compartment(2, 1, "AC", 1000));
    compartments.push_back(Compartment(3, 2, "Sleeper", 300));

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Search Trains\n";
        cout << "2. View Ticket Fares\n";
        cout << "3. Book Tickets\n";
        cout << "4. View Booked Tickets\n";
        cout << "5. Cancel Tickets\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                searchTrains();
                break;
            case 2:
                viewTicketFares();
                break;
            case 3:
                bookTickets();
                break;
            case 4:
                viewBookedTickets();
                break;
            case 5:
                cancelTickets();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
