#include<bits/stdc++.h>
using namespace std;
    int printingnumber(int lrange,int urange){
        //base case
        if(lrange>urange){
        return 0;
        }
        cout<<lrange<<endl;
        printingnumber(lrange+1,urange);
}
int main(){
    int lrange,urange;
    cin>>lrange>>urange;
    printingnumber(lrange,urange);
   // cout<<result<<endl;
    return 0;
}