#include<bits/stdc++.h>
using namespace std;

class string1
{
    char name[20];
    int age;
    int salary;
public:
    string1()
    {
        strcpy(name,"");
        age=0;
        salary=0;
    }
    void getdata(char *n,int e,int m)
    {
        strcpy(name,n);
        age=e;
        salary=m;
    }

    void display(void)
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<salary<<endl;
    }
};

int main()
{
    string1 *p;
    p = new string1;
    p->getdata("hardik",20,10000);
    p->display();
    delete p;
}

