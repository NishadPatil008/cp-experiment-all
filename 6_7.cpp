#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 3, 5, 8, 9, 10, 11};
    int key = 17; 

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == key) {
            cout << "Found: " << arr[left] << " and " << arr[right] << endl;
            return 0;
        } 
        else if (sum < key) {
            left++;
        } 
        else {
            right--;
        }
    }

    cout << "Not found" << endl;
    return 0;
}