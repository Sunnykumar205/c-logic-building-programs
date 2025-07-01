//writing program to check the input character is vowel or not(consonant)
#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin>>a;//taking input from user
     if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
    cout<<"Vowel";}
    else{
    cout<<"Consonant";}
    //another way to check the same condition
    /*  switch(a){//using switch case to check the condition
        case 'a':
        cout<<"vowel";
        break;
        case 'e':
        cout<<"avowel";
        break;
        case 'i':
        cout<<"vowel";
        break;
        case 'o':
        cout<<"vowel";
        break;
        case 'u':
        cout<<"vowel";
        break;
        default :
        cout<<"consonant";
    } */
   return 0;
}