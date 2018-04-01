
#include<iostream>

using namespace std;

class hardik
{
    int code;
    static int count1;
public:
    void getcode(void)
    {
        code=count1++;
    }
    void dispcode(void)
    {
        cout<<"code="<<code<<endl;
    }
    static int showcount(void)
    {
        cout<<"count="<<count1<<endl;   //static member function can only access static data members
    }
};

int hardik :: count1;

int main()
{

   hardik obj1,obj2;
   obj1.getcode();
   obj2.getcode();

   hardik :: showcount();  //to access static member function

   hardik obj3;
   obj3.getcode();


   hardik :: showcount();

   obj1.dispcode();
   obj2.dispcode();
   obj3.dispcode();
}
