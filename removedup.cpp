#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array after removing duplicates:\n";

    for(int i = 0; i < n; i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        
        if(!duplicate)
            cout << arr[i] << " ";
    }

    return 0;
}
