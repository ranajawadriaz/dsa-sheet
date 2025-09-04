#include <iostream>
#include <vector>
#include <utility>  // for std::pair
using namespace std;

// User function Template for C++
class Solution {
public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here

        if (arr.size() != 0)
        {

            int min = arr[0];
            int max = arr[0];

            for (int i = 1; i < arr.size(); i++)
            {
                if (min>arr[i])
                {
                    min = arr[i];
                }

                if (max<arr[i])
                {
                    max = arr[i];
                }
            }

            return { min,max };
        }
        else return { 0,0 };

       

         // placeholder return
    }
};

int main() {
    Solution sol;
    vector<int> arr = { 3, 5, 1, 9, 2 };

    pair<int, int> result = sol.getMinMax(arr);

    cout << "Minimum: " << result.first << ", Maximum: " << result.second << endl;

    return 0;
}
