
#include<bits/stdc++.h>
using namespace std;

//abstract class for which we can't create objects
class base
{
public:
    virtual void disp()=0;
};

class derived: public base
{
  public:
  void disp()
  {
      cout<<"derived class"<<endl;
  }
};

int main()
{
  derived obj;
  obj.disp();

  cout<<"\n";
  cout<<"using base class pointer"<<endl;
  base *ptr;
  ptr=&obj;
  ptr->disp();
}
