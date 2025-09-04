#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {

        // code here

        int start = 0;
        int end = arr.size() - 1;
        int temp = 0;

        while (start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }

        /*for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }*/
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {};

    cout << "Original array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    sol.reverseArray(arr); // call function

    cout << "Array after reverseArray(): ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}