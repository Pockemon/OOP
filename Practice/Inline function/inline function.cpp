#include<iostream>
using namespace std;

inline int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
   int a,b;
   cout<<"enter two valuses\n";
   cin>>a>>b;
   cout<<max(a,b);
   return 0;
}
