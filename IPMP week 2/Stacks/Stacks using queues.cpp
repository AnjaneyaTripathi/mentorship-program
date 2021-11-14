#include <bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1,q2;
    int size;
    public:
        Stack(){
            size = 0;
        }
        void push(int x){
            q1.push(x);
            size++;
        }
       void pop(){
        if(q1.empty()){
        return;
        }
        int n = size;
        while(n>1){
            q2.push(q1.front());
            q1.pop();
            n--;
        }
        q1.pop();
        queue<int> q = q1;
        q1=q2;
        q2 = q;
        size--;
        }
        int top(){
            if(q1.empty()){
                return -1;
            }
            return q1.back();
        }
        bool isempty(){
            return q1.empty();
        }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(9);
    s.push(3);
    s.push(5);
    cout<<"top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"after popping top element is: "<<s.top()<<endl;
    return 0;
}
