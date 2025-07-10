//program to calculate compound intrest
#include<bits/stdc++.h>
using namespace std;
int main(){
    double principle,rate,year,A,CI,c=1,n;//defining the variables of type double
    cout<<"enter the principle"<<endl;
    cin>>principle;//taking principle amount from user
    cout<<"enter rate"<<endl;
    cin>>rate;//taking intrest rate from user
    cout<<"enter years"<<endl;
    cin>>year;//taking years from user
    
    A=(1+rate/100);
    //  this is predefined function to calculate the power of a value
   // double square=(pow(A,year));
   for(int i=1;i<=year;i++){//creating a loop to calcualte the power of a function without using pow function
    c=c*A;
   } 
   //another loop for calculation the power of a value without using pow funtion
 /* double i;
  do{c=c*A;
 i++;}
  while(i<year);*/
   n=c*principle;//clculating the amount 
   CI=n-principle;//calcualtion the compound intrest
   cout<<"compound intrest is : "<<CI;//printing the compound intrest
    return 0;
}