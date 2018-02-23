#include<iostream>

using namespace std;

//Base class
class A
{
   protected:
   int roll;
   public:
   void get_roll(int);
   void put_roll();
};

void A::get_roll(int x)
{
    roll=x;
}

void A::put_roll()
{
    cout<<"Roll number"<<roll<<endl;
}

//Intermediate class
class B:public A
{
  protected:
      float sub1,sub2;
  public:
      void get_marks(float,float);
      void disp_marks();
};

void B::get_marks(float x,float y)
{
    sub1=x;
    sub2=y;
}

void B::disp_marks()
{
    cout<<"marks in subject 1- "<<sub1<<endl;
     cout<<"marks in subject 2- "<<sub2<<endl;
}

//Derived class
class C:public B
{
   float total;
   public:
        void disp_total();
};

void C::disp_total()
{
    total=sub1+sub2;
    put_roll();
    disp_marks();
    cout<<"total is="<<total<<endl;
}


int main()
{
    C obj;
    obj.get_roll(101);
    obj.get_marks(53.3,70.1);
    obj.disp_total();
    return 0;
}









