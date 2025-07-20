//program to sort an array by using bubble sort algorithm
#include<iostream>
//#include<cmath>
using namespace std;
int sort(int array[],int size);//initializing a function to perform sorting operations
int main(){
    int array[]={3,2,5,7,6,9,1,4,8,10};
    int size=sizeof(array)/sizeof(array[0]);//to find soze of the array
    sort(array,size);//pasiing prarameters from the functions
    for(int element:array){//for printing the array
        cout<<element<<" ";
    }
    
    return 0;
}
int sort(int array[],int size){//creating the function to sort the array
    int temp;
    for(int i=0;i<size-1;i++){//creating the first loop to check the first iteration
        for(int j=0;j<size-i-1 ;j++){
            if(array[j]>array[j+1]){
        //        swap(array[j],array[j+1]);//using swap function from the cmath header file
             temp=array[j];//swaping algorithm
             array[j]=array[j+1];
             array[j+1]=temp;
        }
        }
    }
}