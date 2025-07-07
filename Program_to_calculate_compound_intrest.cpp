#include<bits/stdc++.h>
using namespace std;
int main(){
    double principle,rate,year,A,CI,c=1,n;
    cout<<"enter the principle"<<endl;
    cin>>principle;
    cout<<"enter rate"<<endl;
    cin>>rate;
    cout<<"enter years"<<endl;
    cin>>year;
    
    A=(1+rate/100);
   // double square=(pow(A,year));
   for(int i=1;i<=year;i++){
    c=c*A;
   } 
   //another loop for calculation the power of a value without using pow funtion
 /* double i;
  do{c=c*A;
 i++;}
  while(i<year);*/
   n=c*principle;
   CI=n-principle;
   cout<<"compound intrest is : "<<CI;
    return 0;
}