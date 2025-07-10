//program to print the fibonacci series
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;//taking input from the user
    cout<<a<<endl<<b<<endl;//printing the input we take from the user
    for(int i=1;i<=10;i++){//starting the loop which runs the loop 10 times and print the sum of a and b then assing a as b and b as c
    c=a+b;//adding the valuse off a and b
    a=b;//assigning the value of a as b
    b=c;//assigning the value of b as c
    cout<<c<<endl;//printing the output
    }
    return 0;
}