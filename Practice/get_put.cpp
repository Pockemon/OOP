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


/*
Run this to know the difference between cin and get() fuunction.
cin will skip the white space and newline character from input


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count1=0;
    char ch;
    cout<<"enter text"<<endl;
    while(ch!='\n')
    {
        cin>>ch;
        cout.put(ch);
        count1++;
    }
    printf("length of input=%d\n",count1-1);
}
*/
