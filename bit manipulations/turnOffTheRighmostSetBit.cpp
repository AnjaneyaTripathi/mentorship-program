#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number: ";
    int n = 0;
    cin >> n;
    if (n < 1)
    {
        cout << "Enter a number greater than 0: ";
        cin >> n;
    }
    int ans = n ^ (n - 1);
    // all the bits to left of rightmost setbit remain same!!others are 0
    cout << "The number after turning the rightmost set bit of " << n << " is " << ans << endl;
}