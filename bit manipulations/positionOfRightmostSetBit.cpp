#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int pos = 0;
    int x = 1;
    int z;
    while (x <= n)

    {
        if ((x & n) == 0)
        {
            x = x << 1;
        }
        else
        {
            break;
        }
        ++pos;
    }
    cout << "The rightmost set bit is " << pos << endl;
}