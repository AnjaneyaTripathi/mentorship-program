#include<iostream>

int fibonacci(int m){
    if((m==1)||(m==2))return 1;
    else return(fibonacci(m-1)+fibonacci(m-2));
}

int main(){
    int m;
    std::cin>>m;
    printf("%d",fibonacci(m));
}
