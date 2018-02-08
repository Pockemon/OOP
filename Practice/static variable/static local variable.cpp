#include<iostream>
using namespace std;

void display()
{
    static int count1=0;//this line is executed only once when the function is invoked first time
    count1++;
    cout<<count1<<endl;
}

int main()
{
    display();
    display();
    display();
}


