
//program to use class concept in c++ and create class for person which ask's person his name and age and printing name and age values entered by person

#include<bits/stdc++.h>
using namespace std;

class person
{
	 string name;
	 int age;

	 public:
	 	void info1()
	 	{
	 		cout<<"enter name and age of person"<<endl;
            cin>>name>>age;
	 	}

	 	void info2()
	 	{
	 		cout<<"the name of user is  "<<name<<endl;
	 		cout<<"the age of user is "<<age<<endl;
	 	}
};

int main()
{
	 person obj1;
	 obj1.info1();
	 cout<<endl;

	 obj1.info2();
	 return 0;
}
