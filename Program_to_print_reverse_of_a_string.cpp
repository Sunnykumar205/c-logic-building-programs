#include<bits/stdc++.h>
using namespace std;
int main(){
    string sent="sunny kumar";
 //  cin>>sent;
    int a=sent.size();
    cout<<a;
    for(int i=a;i>=0;i--){
        cout<<sent[i];
    }
    return 0;
}