//program to check the number is armstrong or not
#include<iostream>
#include<cmath>//including cmatch header file to use pow and round function
using namespace std;
int main(){
    int number,remainder,i=0,finalans=0,b,a;//defining the variables 
    cout<<"enter a number ";
    cin>>number;//taking input from the user
    a=number;//storing number value to a
    b=number;//storing number value to b
    for(int s=b;s!=0;s/=10){//using for loop to check the condition 
        b=b/10;
        i++;//to check the numbers of loop is running 
    }
  /*  while(b!=0){    //also we can use while loop 
        b=b/10;
        i++;
    }*/
    //cout<<"the value of i "<<i<<endl;
    do{//using the do while loop for the calculating the value is armstorng or not
        remainder=number%10;//dividing to value to get the remiainder
        int power=round(pow(remainder,i));//uisng round and pow function to calculate the power of the number
        finalans=finalans+power;//storing the value to the finalans variable
        number=number/10;//dividing the number with 10 to get the new number
    }while(number>0);//while condition for checking and runing the loop
    //cout<<"final number is "<<finalans<<endl;
    if(finalans==a){//if else condition for checking the number is same as user enter 
        cout<<finalans<<" is armstrong"<<endl;//if number is same then number is armstronge
    }
    else{
        cout<<finalans<<" is not armstorng"<<endl;//else the number is not armstronge
    }
    return 0;
}