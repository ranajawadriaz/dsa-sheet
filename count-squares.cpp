#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countSquares(int n) {
        // code here
        // int count=0;
        // int temp=0;
        // for(int i=n-1;i>0;i--)
        // {
        //     temp=sqrt(i);
        //     temp*=temp;
        //     if(temp==i)
        //     {
        //         count++;
        //     }
        // }

        return sqrt(n - 1);

    }
};

int main() {
    Solution solution;

    // Example test cases
    int n1 = 10;
    int n2 = 25;
    int n3 = 1;

    cout << "Squares less than " << n1 << " = " << solution.countSquares(n1) << endl;
    cout << "Squares less than " << n2 << " = " << solution.countSquares(n2) << endl;
    cout << "Squares less than " << n3 << " = " << solution.countSquares(n3) << endl;

    return 0;
}
