//to see the difference between virtual and simple uncomment the code below and run.it will give error.

#include<bits/stdc++.h>
using namespace std;

class student
{
    int a;
public:
    void dispa()
    {
        a=10;
        cout<<"class student "<<a<<endl;
    }
};

class test:public virtual student
{
    int b;
public:
    void dispb()
    {
        b=20;
        cout<<"class test "<<b<<endl;
    }
};

class sport:public virtual student
{
    int c;
public:
    void dispc()
    {
        c=30;
        cout<<"class sport "<<c<<endl;
    }
};

class result:public test,public sport
{
    int d;
public:
    void dispd()
    {
        d=40;
        cout<<"class result "<<d<<endl;
    }
};

int main()
{
  result obj;
  obj.dispa();
  obj.dispb();
  obj.dispc();
  obj.dispd();
}

/*
#include<bits/stdc++.h>
using namespace std;

class student
{
    int a;
public:
    void dispa()
    {
        a=10;
        cout<<"class student"<<a<<endl;
    }
};

class test:public student
{
    int b;
public:
    void dispb()
    {
        b=20;
        cout<<"class test"<<b<<endl;
    }
};

class sport:public student
{
    int c;
public:
    void dispc()
    {
        c=30;
        cout<<"class sport"<<c<<endl;
    }
};

class result:public test,public sport
{
    int d;
public:
    void dispd()
    {
        d=40;
        cout<<"class result"<<d<<endl;
    }
};

int main()
{
  result obj;
  obj.dispa();
}
*/
