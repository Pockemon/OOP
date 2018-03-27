#include<bits/stdc++.h>
using namespace std;
template <typename T>

class math
{
  T first,second;      //use of template
public:
    math()
    {}
    math(T a,T b)
    {
      first=a;
      second=b;
    }
    void add();
    void multiply();
};

//if you are defining functions outside of class then you have to again define template
template <typename T>
void math<T>::add()
{
    cout<<"addition is="<<first+second<<endl;
}

template <typename T>
void math<T>::multiply()
{
    cout<<"multiplication is="<<first*second<<endl;
}

int main()
{
    math<int>obj(10,20);
    math<double>obj1(10.20,20.30);
    obj.add();
    obj.multiply();
    obj1.add();
    obj1.multiply();
}
