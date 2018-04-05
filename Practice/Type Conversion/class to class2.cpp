//Using casting operator

#include<bits/stdc++.h>
using namespace std;

class product
{
   //int m,n;
   public:
      int m,n;
      //friend class A;// friend class
      void setVal(int r,int s)
      {
          m=r;
          n=s;
      }
      void showVal()
      {
       cout<<"m= "<<m<<" n= "<<n<<endl;
      }
      /*
      int getM()
      {
        return(m);
      }
      int getN()
      {
        return(n);
      }
      */
};

class item
{
   int x,y;
   public:
      void setData(int p,int q)
      {
       x=p;
       y=q;
       }
      void showData()
      {
      cout<<"x= "<<x<<" y= "<<y<<endl;
      }
      operator product()// casting operator
      {
       product temp;
       temp.m=x;
       temp.n=y;
       return temp;
      }
};

int main()
{
  item i1;
  i1.setData(10,20);
  i1.showData();

  product p1;
  p1=i1;
  p1.showVal();
}
