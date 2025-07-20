//program to sort an array with selection sort algorithm
#include<iostream>//including header files to use it's functions
#include<cmath>
using namespace std;
int selectionsort(int array[],int size){//creating and function that perform the algorithm to sort the array
    for(int i=0;i<size-1;i++){//creating for loop to check the all elements of array
        int si=i;//assigning the i as smallest value of array
        for(int j=i+1;j<size;j++){//creating another loop to check the other element are less then i or not
            if(array[j]<array[si]){//creating a if statement to check the array of j is less then array of i
            si=j;//if yes then allogn si as j
            }
        }
    swap(array[i],array[si]);//swaping the vlaue of the array[i] and array[si]
    }
}
int main(){//creating main function to call the function
    int array[]={4,2,6,1,5};//creating an array
    //for taking array as a user input we can also create a for loop and then take array as a input from user
    /*for(int i=0;i<5;i++){
        cout<<"enter array's "<<i<<" element"<<endl;
        cin>>array[i];
    } */
    int size=sizeof(array)/sizeof(array[0]);//this is to find the size of the array
    selectionsort(array,size);//passing array ans size as a parameter in a function
    for(int sorted:array){//using for loop to print the array
        cout<<sorted;
    }
    return 0;
}