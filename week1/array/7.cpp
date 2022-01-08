#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int checkGreater(string &s, int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] < s[n - 1])
        {
            int temp = s[i];
            s[i] = s[n - 1];
            s[n - 1] = temp;
            return i;
        }
    }
    return -1;
}
int main()
{
    string s;
    cout << "Enter the number: ";
    cin >> s;
    int index = checkGreater(s, s.length());
    if (index == -1)
    {
        cout << "Given number is maximum number with the given digits" << endl;
        return 0;
    }
    sort(&s[0] + index + 1, &s[0] + s.length());
    cout << s;
}