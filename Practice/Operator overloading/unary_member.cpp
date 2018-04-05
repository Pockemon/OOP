
#include<bits/stdc++.h>
using namespace std;

class object1
{
  int x;
  int y;
  public:
      void getdata(int a,int b);

      void operator-();

      void display(void);
};

void object1::operator-()
{
   x=-x;
   y=-y;
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

  cout<<"*********************"<<endl;
  obj1.display();
  -obj1;
  obj1.display();

}
