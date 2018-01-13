
/*
   HARDIK RANA
   
   program to use concept of inline function in c++ and print product of two numbers

*/

#include<bits/stdc++.h>
using namespace std;

inline int pro(int a,int b)
{
    return a*b;
}

int main()
{
    cout<<"enter two numbers\n";
    int a,b;
    cin>>a>>b;
    cout<<"Product is "<<pro(a,b)<<endl;
    return 0;
}
