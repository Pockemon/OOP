#include<bits/stdc++.h>
using namespace std;

template<class type>
struct node
{
    type data;
    node *next;
};

template<class type>
class list1
{
public:
    list1();
    int length(void)const;
    void makeempty(void);
    void insert1(void);
    void remove1(void);
    void display();
private:
    node<type>*linkedlist;
    int count1;
};

template<class type>
void list1<type>::display(void)
{
  node<type>*curr=linkedlist;
  cout<<"the linked list is"<<endl;
  while(curr!=NULL)
  {
      cout<<curr->data<<"->";
      curr=curr->next;
  }
  cout<<"NULL"<<endl;
}

template<class type>
list1<type>::list1()
{
   count1=0;
   linkedlist=NULL;
}

template<class type>
int list1<type>::length(void)const
{
   return count1;
}

template<class type>
void list1<type>::makeempty(void)
{
   node<type>*temp;
   while(linkedlist!=NULL)
   {
       temp=linkedlist;
       linkedlist=linkedlist->next;
       delete temp;
   }
   count1=0;
   cout<<"list is empty now"<<endl;
}

template<class type>
void list1<type>::insert1(void)
{
    node<type>*temp;
    type item;
    cout<<"enter item to insert"<<endl;
    cin>>item;
    temp=new node<type>;
    temp->data=item;
    temp->next=linkedlist;
    linkedlist=temp;
    count1++;


    /*
    node<type>*temp1;
    temp1=linkedlist;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->next=NULL;
    count1++;
    */
}

template<class type>
void list1<type>::remove1(void)
{
    node<type>*curr=linkedlist;
    type item;
    cout<<"enter item to remove"<<endl;
    cin>>item;
    node<type>*temp;
    if(item==linkedlist->data)
    {
        temp=curr;
        linkedlist=linkedlist->next;
    }
    else
    {
        while(!(item==(curr->next->data)))
            curr=curr->next;
        curr->next=(curr->next)->next;
    }
    delete temp;
    count1--;
}

int main()
{
   int ch;
   list1<int>list2;
   while(1)
   {
    cout<<"\nsingle linked list-menu"<<endl;
    cout<<"\n1.insert\n2.delete\n3.empty\n4.exit\n";
    cout<<"\nEnter your choice...";
    cin>>ch;
    switch(ch)
    {
    case 1:
        list2.insert1();
        list2.display();
        break;
    case 2:
       if(list2.length()>0)
       {
       list2.remove1();
       list2.display();
       }
       else
       cout<<"\n list empty";
       break;
     case 3:
       list2.makeempty();
       break;
     case 4:
       exit(0);
       default:
       cout<<"\n invalid choice\n";
     }
    }
    return 0;
}





