//program to find the factorial of any number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,fact=1;//initializing the variable to and initialize fact to 1
    cin>>a;
    for(int i=1;i<=a;i++){//creating a loop which runs from the 1 and till the given number is matched
    fact=fact*i;//storing the valuse of the mmultiplication of initialize number and the number of times loop runs
    }
    cout<<"factorial of the number "<<a<<" : "<<fact;//printing the output
    return 0;
}