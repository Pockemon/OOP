
#include<bits/stdc++.h>
using namespace std;

class object1
{
  float x;
  float y;
  public:
      object1()
      {

      }
      object1(float real,float imag)
      {
        x=real;
        y=imag;
      }
      friend object1 operator+(object1 a,object1 b);

      void display(void);
};

object1 operator+(object1 a,object1 b)
{
   object1 temp;
   temp.x=a.x+b.x;
   temp.y=a.y+b.y;
   return temp;
}

void object1::display(void)
{
    cout<<x <<" +i"<< y <<endl;
}

int main()
{
  object1 obj1(2.5, 3.5);
  object1 obj2(1.6, 2.7);
  object1 obj3;
  //object1 obj1,obj2,obj3;
  //obj1 = object1(2.5,3.5);
  //obj2 = object1(1.6,2.7);
  obj3=obj1+obj2;

  cout<<"obj1= ";
  obj1.display();
  cout<<"obj2= ";
  obj2.display();
  cout<<"obj3= ";
  obj3.display();
}
