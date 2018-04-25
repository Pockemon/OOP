#include<bits/stdc++.h>
using namespace std;

class M
{
  public:
      void display()
      {
        cout<<"class M"<<endl;
      }
};

class N
{
  public:
      void display()
      {
        cout<<"class N"<<endl;
      }
};

class K:public M,public N
{
  public:
      void display()
      {
        cout<<"class K"<<endl;

        M::display();

        N::display();
      }
};

int main()
{
  K k;
  k.display();
}


