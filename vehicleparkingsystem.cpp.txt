#include<iostream>
using namespace std;
int main(){
    int choice=0;
    int car=0,bike=0,rickshaw=0;
    while(true){
        cout<<"MENU"<<endl;
    cout<<"1.Park Car\n2.Park Bike\n3.Park Rickshaw\n4.Details\n5.Exit\n";
    cout<<"\n"<<endl;
        cout<<"Enter the Choice:";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Car Successfully Parked"<<endl;
            car++;
            break;
        case 2:
            cout<<"Bike Successfully Parked"<<endl;
            bike++;
            break;
        case 3:
            cout<<"Rickshaw Successfully Parked"<<endl;
            rickshaw++;
            break;
        case 4:
            cout<<"Vehicle Details"<<endl;
            cout<<"CAR: "<<car<<endl;
            cout<<"BIKE: "<<bike<<endl;
            cout<<"RICKSHAW: "<<rickshaw<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
    char c;
    cout<<"Do You Want to Park Something(Y/N):";
    cin>>c;
    if(c!='Y'&&c!='y'){
        break;
    }
}
}
