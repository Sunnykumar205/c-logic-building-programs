//prograt to print the reverse order of table
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=10;i>=1;i--){//create a loop to print revese of table
        cout<<N<<" * "<<i<<" = "<<N*i<<endl;
    }
    return 0;
}