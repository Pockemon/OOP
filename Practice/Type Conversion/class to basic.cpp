#include<bits/stdc++.h>

using namespace std;

class complex1
{
private:
    int a,b;
public:
    void getval(int x,int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }

    //casting operator
    operator int()
    {
        return(a);
     //   return(b);
    }
};

int main()
{
   complex1 c1;
   int x;
   c1.getval(10,20);
   x=c1;
   cout<<"x= "<<x<<endl;
}
