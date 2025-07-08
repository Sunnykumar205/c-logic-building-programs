//program to check the number is palindrome or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,remainder,originalvalue,reversevalue=0;//declarign the all variables 
    cin>>num;
    originalvalue=num;//assigning the value of number to b
   while(num!=0){
    remainder=num%10;//deviding num with 10 to find reminder
    reversevalue=reversevalue*10+remainder;//storing the reverse of the value of num user enter in reverse variable
    num/=10;//dividing the value of num with 10 and store the value to num run the further loop

   }
       if(originalvalue==reversevalue){//comparing the original value to the reverse value to print the output 
        cout<<"number is palandrome";
    }
    else{
        cout<<"number is not palandrome";
    }
    return 0;
}
/*  this is used for find three digit palindrome number
//    a=num%10;//1
//    b=num/10//12
//    c=b%10;//2
//    d=b/10;//1
  final=(a*100)+(c*10)+d;
    cout<<final<<endl; */
