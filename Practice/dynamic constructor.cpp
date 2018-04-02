#include<bits/stdc++.h>
using namespace std;

class try1
{
    char *name;
    int length;
public:
    try1()
    {
        length=0;
        name=new char[length+1]; //one additional for '\0',dynamic constructor
    }
    try1(char *s)
    {
        length=strlen(s);
        name=new char[length+1];  //dynamic constructor
        strcpy(name,s);
    }

    void display(void)
    {
        cout<<name<<endl;
    }

    void join(try1 &a,try1 &b); //use of copy constructor
};

void try1 :: join(try1 &a,try1 &b)
{
    length = a.length+b.length;
    delete name;
    name = new char[length+1];

    strcpy(name, a.name);
    strcat(name, b.name);
}

int main()
{
    char *first = "hardik";

    try1 name1(first),name2("hardik2"),name3("hardik3"),s1,s2;

    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();



}
