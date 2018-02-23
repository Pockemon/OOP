/* Hardik Rana
  
   inheritance introduction
   
*/

#include <bits/stdc++.h>
using namespace std;

//Base class
class Parent
{
    public:
      int id1;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
    public:
      int id2;
};

//main function
int main()
   {

        Child obj1;

        obj1.id2= 7;
        obj1.id1= 91;
        cout << "Child id is " <<  obj1.id2 << endl;
        cout << "Parent id is " <<  obj1.id1 << endl;

        return 0;
   }
