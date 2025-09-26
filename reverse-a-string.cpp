#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        // Implementation goes here
        //int last = s.size() - 1;
        for (int i = 0,j=s.size()-1; i < s.size()/2; i++,j--)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

        }
    }
};

int main() {
    // Example usage
    Solution solution;
    vector<char> s = { 'h', 'e', 'l', 'l' };
    solution.reverseString(s);

    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
