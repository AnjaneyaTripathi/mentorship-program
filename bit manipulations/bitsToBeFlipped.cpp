#include <iostream>
using namespace std;
// we need to calculate total number of different bits in both A and B
//  i.e. if we do XOR of both the numbers then we will have the number where bits will be set which are different un both
// then we can calculate the total set bits in the xor-ed answer to find number of bits to be flipped
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
    int a, b;
    cout << "Enter the number A: ";
    cin >> a;
    cout << "Enter the number B: ";
    cin >> b;
    int result = a ^ b;
    cout << "The number of bits to be flipped to make " << a << " to " << b << " is " << countSetBits(result);
}