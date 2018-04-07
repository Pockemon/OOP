//multiple inheritance

#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
public:
    A(int x)
    {
        a=x;
        cout<<"A class"<<endl;
    }

    void dispa(void)
    {
        cout<<"value of a "<<a<<endl;
    }
};

class B
{
    int b;
public:
    B(int y)
    {
        b=y;
        cout<<"B class"<<endl;
    }

    void dispb(void)
    {
        cout<<"value of b "<<b<<endl;
    }
};

//constructor will execute according to this sequence after col.
class C:public B,public A
{
    int m;
public:
    C(int x,int y,int z):
    A(x),B(y)
    {
        m=z;
        cout<<"C class"<<endl;
    }
    void dispc(void)
    {
        cout<<"value of m "<<m<<endl;
    }
};

int main()
{
    C obj(10,20,30);
    obj.dispa();
    obj.dispb();
    obj.dispc();
}

