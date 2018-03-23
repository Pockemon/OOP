#include<bits/stdc++.h>

using namespace std;

int main()

{
    for(int i=1;i<10;i++)
    {
        cout.width(10);

        cout.precision(4);

        cout<<sqrt(i)<<endl;
    }
    
    printf("\n");

    for(int i=1;i<10;i++)
    {
        cout.width(10);

        cout.fill('*');

        cout.precision(4);

        cout<<sqrt(i)<<endl;
    }
}
