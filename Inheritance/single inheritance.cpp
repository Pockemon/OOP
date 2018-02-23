//single inheritance

#include<iostream>

using namespace std;

class A
{
     int a;
     public:
     void getval_a(int);
     int get_a();
};

class B:public A
{
  int b,c;
  public:
      void getval_b(int); //if the visibility mode is private then we can make a function in
                          //class b in public section where we can call getval_a() and get_a()
                          //functions
      void add();
      void disp();
};

void A::getval_a(int x)
{
    a=x;
}

int A::get_a()
{
    return a;
}

void B::getval_b(int x)
{
    b=x;
}

void B::add()
{
   c= get_a()+b;
}

void B::disp()
{
    cout<<"a="<<get_a()<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
}

int main()
{
    int a,b;
    B obj;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    obj.getval_a(a);
    obj.getval_b(b);
    obj.add();
    obj.disp();
    return 0;
}

