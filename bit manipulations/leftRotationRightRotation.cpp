#include <iostream>
using namespace std;
// assume 32 bits integers
int leftRot(int n, int d)
{
    int x = n >> 32 - d; // getting MSB
    n = n << d;          // left shifting number
    n = n | x;           // adding MSB at last
    return n;
}
int rightRot(int n, int d)
{
    int x = n << 32 - d; // getting LSB as MSB of a number
    n = n >> d;          // right shift number
    n = n | x;           // adding LSB at last
    return n;
}
int main()
{
    cout << "Enter the number: ";
    int n, d;
    cin >> n;
    cout << "Enter the numberof bits to be rotated: ";
    cin >> d;
    cout << "Left rotation of " << n << " gives " << leftRot(n, d) << endl;
    cout << "Right rotation of " << n << " gives " << rightRot(n, d) << endl;
}