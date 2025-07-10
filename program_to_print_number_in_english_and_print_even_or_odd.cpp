//program to print numbers in english and print even or odd for the numbers which is grater than 9
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,i,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){//using for loop to check the user input and increase it till second input 
        switch (i) {//using swith statement for printing the number in english 
    case 1:
    cout<<"one"<<endl;
    break;
    case 2:
    cout<<"two"<<endl;
    break;
    case 3:
    cout<<"three"<<endl;
    break;
    case 4:
    cout<<"four"<<endl;
    break;
    case 5:
    cout<<"five"<<endl;
    break;
    case 6:
    cout<<"six"<<endl;
    break;
    case 7:
    cout<<"seven"<<endl;
    break;
    case 8:
    cout<<"eight"<<endl;
    break;
    case 9:
    cout<<"nine"<<endl;
    }
    }
    for( i=10;i<=b;++i){//usign for loop for checking the number is even or odd
        if(i%2==0){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
