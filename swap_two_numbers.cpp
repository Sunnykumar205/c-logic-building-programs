//writing program to swap two numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,temp;
    cin>>a>>b;
    temp=a;//storing the value of a to temp variable
    a=b;//storing value of b to a
    b=temp;//again storing value of temp to b
    /* another method to swap numbers
    b=a+b;
    a=b-a;
    b=b-a;
     */
    cout<<"a = "<<a<<endl<<"b = "<<b;//printing the output
    return 0;
}
