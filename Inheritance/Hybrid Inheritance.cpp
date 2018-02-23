/*
  Hardik Rana
  
  Hybrid Inheritance
  
*/


#include<iostream>

using namespace std;

class student
{
    int roll;
    public:
        void getroll(int x)
        {
            roll=x;
        }
        void disproll()
        {
            cout<<"the roll number of the student is="<<roll<<endl;
        }

};

class test:public student
{
    protected:
        float sub1,sub2;
    public:
        void getmarks(float x,float y)
        {
           sub1=x;
           sub2=y;
        }
        void dispmarks()
        {
          cout<<"marks in subject1="<<sub1<<endl;
          cout<<"marks in subject2="<<sub2<<endl;
        }

};

class sport
{
   protected:
       float sp;
   public:
       void getmarkss(float i)
        {
           sp=i;
        }
        void dispmarkss()
        {
          cout<<"marks of sport is="<<sp<<endl;
        }

};

class result:public test,public sport
{
    float total;
    public:
        void disp();
};

void result::disp()
{
    total=sub1+sub2+sp;
    disproll();
    dispmarks();
    dispmarkss();
    cout<<"total score is="<<total<<endl;
}

int main()
{
  result obj;
  obj.getroll(101);
  obj.getmarks(80.5,95.5);
  obj.getmarkss(10);
  obj.disp();
  return 0;
}
