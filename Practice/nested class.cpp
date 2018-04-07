#include<bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;

    class address
    {
    public:
        string country;
        string city;
        int hno;
    };

    address adr;
    void addpls()
    {
    cout<<"name :"<< name <<endl;
    cout<<"country :"<< adr.country <<endl;
    cout<<"city :"<< adr.city <<endl;
    cout<<"house no :"<< adr.hno <<endl;
    }
};


int main()
{
  person obj;
  obj.name = "hardik";
  obj.adr.country = "india";
  obj.adr.city = "ahmedabad";
  obj.adr.hno = 304;

  obj.addpls();
}
