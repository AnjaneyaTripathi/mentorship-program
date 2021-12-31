#include <iostream>
using namespace std;
void arrange(string s, int left, int right)
{
    if (left == right)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = left; i <= right; i++)
        {

            swap(s[left], s[i]);
            arrange(s, left + 1, right);
            swap(s[left], s[i]);
        }
    }
}

int main()
{
    string s1;
    cin >> s1;
    arrange(s1, 0, s1.length() - 1);
}
