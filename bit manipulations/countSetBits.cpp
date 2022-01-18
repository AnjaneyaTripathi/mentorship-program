#include <iostream>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        ++count;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number of set bits in the number " << n << " is " << countSetBits(n);
}