//program to write the table of number N
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1;i<=10;i++){//creating a loop that comoare the value of i to N and increase tha value of i
        cout<<N<<" * "<<i<<" = "<<i*N<<endl;//printing the value of the table of number N
    }
    return 0;
}