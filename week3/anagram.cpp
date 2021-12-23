#include <iostream>
#include <string>
using namespace std;
int *getArray(string s, int a[])
{
    int i = 0;

    while (i<s.length())
    {a[(int)s[i]]++;
    i++;
    }
    return a;
}

int main()
{
    cout << "Enter the first string: ";
    string s1, s2;
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    int *arr1 = (int *)calloc(256, sizeof(int));
    arr1 = getArray(s1, arr1);
    int *arr2 = (int *)calloc(256, sizeof(int));
    arr2 = getArray(s2, arr2);
    for(int i=0; i<256;i++){
        if(arr1[i]!=arr2[i]){
            cout<<"Not anagrams!!"<<endl;
            return 0;
        }
    }
    cout<<"Anagrams"<< endl;
}