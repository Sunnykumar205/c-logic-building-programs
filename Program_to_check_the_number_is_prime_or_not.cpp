//progam to chaeck the given number is prime or non prime
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;//m=0;
    cin>>n;
    for(i=2;i<n;i++){//creating a loop to check the given number is divisile by and other number
        if(n%i==0){//condition to check the numner is dividid i is equal to 0
        cout<<n<<" : Number is non prime"<<endl;
        break;//this is use to stop the program to go furthes and print other statement
        }
    }
    if(i==n){
        cout<<"number is prime";
    }
    /*    
    #another way to check the number is prime or non prime
       for(int i=2;i<n;i++){
        if(n%i==0){
            m++;
        }   
    }
    if(m==0){
        cout<<"Nmber is prime";
    }
    else{
        cout<<"number is non prime";
    }
        */
    return 0;
}