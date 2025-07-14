//program to print the reverse of the number user enter
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number,remainder;//defining the variables 
    cout<<"enter a number ";
    cin>>number;//taking input from the user
    for(int i=number;i!=0;i/=10)//using for loop to check the number and perform the operation
  // while(number!=0);//also we can use while loop for the condition check 
  {
        remainder=number%10;//dividing the value from 10 to get the reminder
        cout<<remainder;
        number /=10;//dividing the value from 10 to get the new value 
    }
    return 0;
}