#include <iostream>
using namespace std;
int checkPowerOf2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    // in a binary number n & (n-1) will have same bits which are left of right most 1 in n i.e. all the bits to left of right most set bit in n will remain same in (n) & (n-1)
    return ((n & (n - 1))); // will be zero in case of n being a power of 2
}
int main()
{
    cout << "Enter the number you want to enter: ";
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Enter a positive number: ";
        cin >> n;
    }
    if (!checkPowerOf2(n))
    {
        cout << n << " is a power of 2" << endl;
        return 0;
    }
    cout << n << " is not a power of 2" << endl;
    return 0;
}