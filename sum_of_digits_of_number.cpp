//program to print the sum of the digits of a number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,remainder,newnum=0;//initializing all variables
    cin>>num;//taking input from user
    while(num !=0)//using while loop to check the number is not equal to 0
 //  for(int i=num;i>0;i/=10)//also we can use for loop to check the same condition
   {
        remainder = num % 10;//devide the num with 10 and store the reminder value
        newnum = newnum + remainder;//adding the reminder to get the desired output
        num = num/10;//deviding the numebr with 10 to store the new value and check the loop condition
    }
    cout<<newnum;//printing the output
    return 0;
}