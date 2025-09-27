#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> temp;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == i + 1) {
                temp.push_back(arr[i]);
            }
        }
        return temp;
    }
};

int main() {
    Solution solution;

    // Example test case
    vector<int> arr = { 15, 2, 45, 4, 7 };

    vector<int> result = solution.valueEqualToIndex(arr);

    cout << "Elements equal to their index: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
