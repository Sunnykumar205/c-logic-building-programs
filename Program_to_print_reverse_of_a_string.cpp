//program to print a reverse of a string
#include<bits/stdc++.h>
using namespace std;
int main(){
    string sent;//initializing the string 
  getline(cin,sent);//taking input from the user
    int a=sent.size();//this is for showing the size of the string 
    for(int i=a;i>=0;i--){//using loop to reverse the string and print from the last word
        cout<<sent[i];//printing the string 
    }
    return 0;
}