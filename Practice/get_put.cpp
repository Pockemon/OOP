#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count1=0;
    char ch;
    cout<<"enter text"<<endl;
    while(ch!='\n')
    {
        ch=cin.get();
        cout.put(ch);
        count1++;
    }
    printf("length of input=%d\n",count1-1);
}
