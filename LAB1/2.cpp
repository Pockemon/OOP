
//program to use function overloading concept in c++ and find the volume of cube,cuboid and cyllinder

#include<bits/stdc++.h>

using namespace std;

void print(int a);
void print(int a,int b,int c);
void print(int r,int h);


int main()
{
 int a;
 cout<<"enter side of cube\n";
 cin>>a;
 print(a);
 cout<<"enter values for sides of cuboid\n";
 int q,b,c;
 cin>>q>>b>>c;
 print(q,b,c);
 cout<<"enter values of radius and height of cyllinder\n";
 int r,h;
 cin>>r>>h;
 print(r,h);
 return 0;
}


void print(int a)
{
  cout<<a*a*a<<endl;
}

void print(int a,int b,int c)
{
 cout<<a*b*c<<endl;
}

void print(int r,int h)
{
  float d=3.14*r*r*h;
  cout<<d<<endl;
}

