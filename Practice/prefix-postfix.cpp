#include<bits/stdc++.h>
using namespace std;

class increment
{
    int count1;
public:
    increment()
    {
        count1=1;
    }
    increment(int i)
    {
        count1=i;
    }
    increment operator--()
    {
        return increment(--count1);
    }
    increment operator--(int)
    {
        return increment(count1--);
    }
    void display(void)
    {
        cout<<count1<<endl;
    }
};

int main()
{
    increment c1,c2,c3,c4;

    c2=--c1;
    cout<<"c1=";
    c1.display();
    cout<<"c2=";
    c2.display();

    c4=c3--;
    cout<<"c3=";
    c3.display();
    cout<<"c4=";
    c4.display();
}
