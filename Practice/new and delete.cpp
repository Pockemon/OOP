/*
     HARDIK RANA
     
    to take marks of different subject using dynamic memory allocation from student and calculate sum of that
 */

#include<iostream>

using namespace std;

int main()
{
    int n,i;
    float *p,total=0;
    cout<<"enter total number of subjects\n";
    cin>>n;
    //to allocate memory
    p=new float[n];
    //p will contain starting address of array
    cout<<"enter marks\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Subject\n"<<i+1;
        cin>>*(p+i);//or we can also use cin>>p[i]
        total=total+*(p+i);
    }
    cout<<"total\n"<<total;
    //cout<<p<<endl;
    delete []p;
    return 0;
}
