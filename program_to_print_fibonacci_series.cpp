#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=10;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<endl;
    }
    return 0;
}