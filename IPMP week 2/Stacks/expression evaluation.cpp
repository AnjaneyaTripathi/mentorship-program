#include <bits/stdc++.h>
using namespace std;
bool isop(char s){
    if(s=='+'||s=='-'||s=='*'||s=='/'||s=='^'){
        return true;
    }
    return false;
}
int precedence(char s){
    if(s=='+'||s=='-'){
        return 1;
    }
    if(s=='*'||s=='/'){
        return 2;
    }
    if(s=='^'){
        return 3;
    }
    return -1;
}
void evaluation (string s){
    stack<char> op;
    stack<int> val;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            continue;
        }else if(s[i]=='('){
            op.push(s[i]);
        }else if(isdigit(s[i])){
            int v = 0;
            while(isdigit(s[i])){
                int d = s[i]-'0';
                v = v*10 + d;
                i++;
            }
            i--;
            val.push(v);
        }else if(s[i]==')'){
            while(op.top()!='('){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int o = op.top();
                    op.pop();
                    switch(o){
                    case '+':
                        val.push(val1 + val2);
                        break;
                    case '-':
                        val.push(val1 - val2);
                        break;
                    case '*':
                        val.push(val1 * val2);
                        break;
                    case '/':
                        val.push(val1 / val2);
                        break;
                    case '^':
                        val.push(pow(val1,val2));
                        break;
                    }
            }
            op.pop();
        }
        else if(isop(s[i])){
           while(!op.empty() && precedence(op.top())>=precedence(s[i])){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int o = op.top();
                    op.pop();
                    switch(o){
                    case '+':
                        val.push(val1 + val2);
                        break;
                    case '-':
                        val.push(val1 - val2);
                        break;
                    case '*':
                        val.push(val1 * val2);
                        break;
                    case '/':
                        val.push(val1 / val2);
                        break;
                    case '^':
                        val.push(pow(val1,val2));
                        break;
                    }
           }
           op.push(s[i]);
        }
    }
     while(!op.empty()){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int o = op.top();
                    op.pop();
                    switch(o){
                    case '+':
                        val.push(val1 + val2);
                        break;
                    case '-':
                        val.push(val1 - val2);
                        break;
                    case '*':
                        val.push(val1 * val2);
                        break;
                    case '/':
                        val.push(val1 / val2);
                        break;
                    case '^':
                        val.push(pow(val1,val2));
                        break;
                    }
        }
    cout<<val.top()<<endl;

}
int main(){
    string s;
    cout<<"enter the input expression: ";
    cin>>s;
    evaluation(s);
    return 0;
}
