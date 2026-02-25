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

    
    
    cout << "Reversed array:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
