//program to find maximum of four number by using function
#include <iostream>
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){//creating a function to check the maximum of the given numbers
    if(a>b && a>c && a>d){//first comdition
        return a;
    }else if(b>a && b>c && b>d){//second condition
        return b;
    }else if(c>a && c>b && c>d){//third condition
        return c;
    }else {
        return d;
}
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
  //  scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);//passing the value from the function
  //  printf("%d", ans);
  cout<<"maximum of numbers : "<<ans;
    
    return 0;
}