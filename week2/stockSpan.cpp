#include <iostream>
#include <stack>
using namespace std;
void calculateSpan(stack<int> &s, int *span, int n)
{int spanItr=n-1;
    stack<int> aux;
    while (s.empty() == false)
    {
        int top = s.top();
        int count = 1;
        s.pop();
        while (s.empty() == false&&s.top() < top)
        {
            aux.push(s.top());
            s.pop();
            ++count;
        }

        while (aux.empty() == false)
        {
            s.push(aux.top());
            aux.pop();
        }
span[spanItr] =count;
--spanItr;
    }
}
void printSpan(int *span,int n){
    cout<<"Following is the span: ";
  for(int i=0;i<n;i++)cout<<span[i]<<" ";
}
int main()
{
    int n, element;
    stack<int> s;
    cout << "Enter the no. of days of: ";
    cin >> n;
    cout << "Enter the values of the stocks:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        s.push(element);
    }

    int *span = (int *)malloc(n * sizeof(int));
    calculateSpan(s, span, n);
    printSpan(span,n);
}