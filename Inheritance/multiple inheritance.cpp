/*
  Hardik Rana
  
  Multilple Inheritance
  
*/


#include<iostream>

using namespace std;

class A
{
   protected: //can be used in this class and can also used in that class which is derived from this class
       int n;
   public:
       void get_n(int);

};

void A::get_n(int x)
{
    n=x;
}

class B
{
  protected:
      int m;
  public:
     void get_m(int);
};

void B::get_m(int x)
{
    m=x;
}

class C:public A,public B
{
   int v;
   public:
       void add();
       void disp();
};

void C::add()
{
    v=m+n;
}

void C::disp()
{
    cout<<"value of n is="<<n<<endl;
    cout<<"value of m is="<<m<<endl;
    cout<<"sum of m and n is="<<v<<endl;

}

int main()
{
  C obj;
  obj.get_n(100);
  obj.get_m(200);
  obj.add();
  obj.disp();
  return 0;
}
