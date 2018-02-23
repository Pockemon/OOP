/*
  Hardik Rana
  
  Hierarchical  Inheritance
  
*/

#include<iostream>

using namespace std;

class A
{
  protected:
      int no;
  public:
     void get_no()
     {
        cout<<"enter number"<<endl;
        cin>>no;
     }
};

class B:public A
{
  public:
      void square()
      {
          cout<<"the square of the number is="<<no*no<<endl;
      }

};

class C:public A
{
  public:
      void cube()
      {
          cout<<"the cube of the number is="<<no*no*no<<endl;
      }

};

int main()
{
    B obj1;
    C obj2;
    obj1.get_no();
    obj2.get_no();
    obj1.square();
    obj2.cube();
    return 0;
}
