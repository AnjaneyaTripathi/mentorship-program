#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int ex = n >> 31; // this becomes -1 for negative numbers and 0 for positive numbers
    // (ex+n) will be the ones complement form of the number, xor with -1(ie all 1s) it will give the absolute value of the number
    int ans = (ex + n) ^ ex;
    cout << "Absolute value is: " << ans << endl;
    // assuming the number to be a 32 bit number:
    // as negative numbers in 2s complement form we can do it in two ways: either xor
}