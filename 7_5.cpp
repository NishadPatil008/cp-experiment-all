#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of K (e.g., 3 for the 3rd smallest): ";
    cin >> k;
    if (k > 0 && k <= n) {
        sort(arr.begin(), arr.end());
        cout << "The " << k << "th smallest element is: " << arr[k-1] << endl;
        
    } else {
        cout << "Invalid input!";
    }

    return 0;
}