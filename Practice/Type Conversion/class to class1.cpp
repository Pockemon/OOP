//Using constructor

#include<bits/stdc++.h>

using namespace std;

class product
{
private:
    int c,d;
public:
    void getval(int x,int y)
    {
        c=x;
        d=y;
    }
    int getC()
    {
        return(c);
    }
    int getD()
    {
        return(d);
    }
};

class item
{
private:
    int a,b;
public:
    item()
    {

    }
    item(product p)
    {
        a=p.getC();
        b=p.getD();
    }
    void display()
    {
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
};


int main()
{
   item i1;
   product p1;
   p1.getval(3,4);
   i1=p1;
   i1.display();
}

