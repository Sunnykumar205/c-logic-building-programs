//program to check the number is even or odd
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;//taking input from user
    if(a%2==0){//if else using to check the condition is fully divided by two is even else the number is odd
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}