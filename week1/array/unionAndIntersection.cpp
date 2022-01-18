#include <iostream>
using namespace std;
void unionArray(int *arr1, int *arr2, int n1, int n2)
{
    int i, j;
    for (i = 0, j = 0; i < n1 && j < n2;)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            ++i;
        }
        else if (arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            ++j;
        }
        else
        {
            int key = arr1[i];
            cout << key << " ";
            ++i;
            ++j;
            for (int k = i; k < n1 && i < n1; k++)
            {
                if (key == arr1[k])
                {
                    ++i;
                }

                else
                    break;
            }
            for (int k = j; k < n2 && j < n2; k++)
            {
                if (key == arr2[k])
                {
                    ++j;
                }

                else
                    break;
            }
        }
    }
    while (i < n1)
    {
        cout << arr1[i] << ' ';
        ++i;
    }
    while (j < n2)
    {
        cout << arr2[j] << " ";
        ++j;
    }
    cout << endl
         << endl;
}
void intersectionArray(int *arr1, int *arr2, int n1, int n2)
{
    int i, j;
    for (i = 0, j = 0; i < n1 && j < n2;)
    {
        if (arr1[i] > arr2[j])
        {
            ++j;
        }
        if (arr1[i] < arr2[j])
        {
            ++i;
        }
        else
        {
            cout << arr1[i] << " ";
            ++i;
            int key = arr2[j];
            ++j;
            for (int k = i; k < n1 && i < n1; k++)
            {
                if (key == arr1[k])
                {
                    ++i;
                }

                else
                    break;
            }
            for (int k = j; k < n2 && j < n2; k++)
            {
                if (key == arr2[k])
                {
                    ++j;
                }

                else
                    break;
            }
        }
    }
    cout<<endl<<endl;
}
int main()
{
    cout << "Enter the size of the array1: ";
    int n1, n2;
    cin >> n1;
    int *arr1 = new int[n1];
    cout << "Enter the sorted array1: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter the size of the array2: ";

    cin >> n2;
    int *arr2 = new int[n2];
    cout << "Enter the sorted array2: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    cout << "The union of the two arrays is: ";
    unionArray(arr1, arr2, n1, n2);
    cout<<"The intersection of the two arrays is: "
    intersectionArray(arr1, arr2, n1, n2);
}