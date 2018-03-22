#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream ofs("file.txt");

    char name[30];
    cout<<"enter item name"<<endl;
    cin>>name;

    int cost;
    cout<<"enter item cost"<<endl;
    cin>>cost;

    ofs<<name<<endl;
    ofs<<cost<<endl;

    ofs.close();

    ifstream ifs("file.txt");
    ifs>>name;
    ifs>>cost;

    cout<<"item name is "<<name<<endl;
    cout<<"item cost is "<<cost<<endl;

    ifs.close();

}
