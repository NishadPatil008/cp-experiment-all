#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int a[100], n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}