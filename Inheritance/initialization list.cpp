
#include<bits/stdc++.h>
using namespace std;

class alpha
{
    int a;
public:
    alpha(int x)
    {
        a=x;
        cout<<"alpha class"<<endl;
    }
    void dispa(void)
    {
        cout<<"value of a "<<a<<endl;
    }
};

class beta
{
    int b,c;
public:
    beta(int x,int y):b(x),c(y)
    {
        cout<<"beta class"<<endl;
    }
    void dispb(void)
    {
      cout<<"value of b "<<b<<endl;
      cout<<"value of c "<<c<<endl;
    }

};

class gamma:public beta,public alpha
{
    int u,v;
public:
    gamma(int a,int b,int c):
        alpha(a),beta(c,c),u(a)
        {
            v=b;
            cout<<"gamma class"<<endl;
        }
        void dispc(void)
        {
          cout<<"value of u "<<u<<endl;
          cout<<"value of v "<<v<<endl;
        }


};

int main()
{
   gamma obj(10,20,30);

   obj.dispa();
   obj.dispb();
   obj.dispc();
}
