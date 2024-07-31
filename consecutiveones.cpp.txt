#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 1, 0, 1, 1, 1};
    int count = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])) - 1; i++) {
        if (arr[i] == 1 && arr[i + 1] == 1) {
            count++;
        }
    }
    cout << "Count: " << count << endl;
    return 0;
}
