
#include<iostream>

using namespace std;

class hardik
{
public:
    static int count1;//this variable has class scope.all objects of class can use this variable.
                      //we can't assign static variable here.we have to assign it outside the class

    //build constructor
    hardik()
    {
        count1++;//how many counts are there.
    }

    //how to use static variable inside member function
    void total(){
    cout<<"count1="<<count1<<endl;
    }

};

int hardik :: count1=0;

int main()
{
    cout<<hardik::count1<<endl;//we can access static variable without creating any object

    //create object
    hardik var;
    hardik var1;
    hardik var2;
    hardik var3;
    hardik var4;

    var.total();
    var.total();
    var.total();
    var.total();
    var.total();

    //cout<<hardik::count1<<endl;
}
