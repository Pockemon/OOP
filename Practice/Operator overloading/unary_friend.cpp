

#include<bits/stdc++.h>
using namespace std;

class object1
{
  int x;
  int y;
  public:
      void getdata(int a,int b);

      friend void operator-(object1 &s);

      void display(void);
};

void operator-(object1 &s)
{
   s.x=-s.x;
   s.y=-s.y;
}

void object1::display(void)
{
    cout<<"x="<<x<<" ";
    cout<<"y="<<y<<" ";
    cout<<endl;
}

void object1::getdata(int a,int b)
{
          x=a;
          y=b;
}

int main()
{
  object1 obj1;
  obj1.getdata(10,20);

  cout<<"*******DISPLAY*********"<<endl;
  obj1.display();
  -obj1;
  obj1.display();

}
