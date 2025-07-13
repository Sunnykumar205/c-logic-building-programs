//program to guess the random number game
//#include<bits/stdc++.h>
#include<iostream>
#include<ctime>//adding header file to use random number generate function
using namespace std;
int main(){
    int num,guess,tries=0;
    srand(time(0));//creating the current time null function to generate random number
    num=(rand()% 100)+1;//generating random number between 1 to 100 and storing it to num
    do{//using do-while loop to check the number is grate less or same as guessed number
        cout<<"guess the number ";
        cin>>guess;
        if(guess>num){
            cout<<"number is grater"<<endl;
        } else if(guess<num){
            cout<<"number is to less"<<endl;
        }else{
            cout<<"number is correct"<<endl;
        }
        tries +=1;//adding 1 every time loop rund and store the value in tries
    }
    while(guess!=num);//running the loop until guess number is not equal to num
    cout<<"number of tries "<<tries;//printing the number of tries to guess the correct number
    return 0;
}