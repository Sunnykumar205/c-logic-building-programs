//program to check the year is Leap Year or Not 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter The Year : ";
    cin>>year;
    if((year%4==0) && (year%100!=0) || (year%400==0)){//applying if else operator to chek the condition
        cout<<year<<" : Leap Year ";
    }
    else{
        cout<<year<<" : Non Leap Year ";
    }
    return 0;
}