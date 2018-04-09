#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    void disp()
    {
        cout<<"display base"<<endl;
    }
	virtual void show()
	{
		cout<<"show base"<<endl<<endl;
	}
};

class derived : public base
{
public:
	void disp()
    {
        cout<<"display derived"<<endl;
    }
	void show()
	{
		cout<<"show derived"<<endl<<endl;
	}
};

int main()
{
	base *ptr;
	base obj1;
	derived obj2;

	ptr=&obj1;
	ptr->disp();
	ptr->show();

	ptr=&obj2;
	ptr->disp();
	ptr->show();


}
