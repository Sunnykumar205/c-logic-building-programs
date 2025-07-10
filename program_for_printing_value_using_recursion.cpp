//program to print numbers given by user using recursion
#include<bits/stdc++.h>
using namespace std;
    int printingnumber(int lrange,int urange){//creating function for checking the base case and printing numbers by using head recursion
        //base case
        if(lrange>urange){//deciding base case
        return 0;
        }
        cout<<lrange<<endl;
        printingnumber(lrange+1,urange);//calling function and increasing the value
}
int main(){
    int lrange,urange;
    cin>>lrange>>urange;//taking input from the user
    printingnumber(lrange,urange);//passing the value from the function
    return 0;
}