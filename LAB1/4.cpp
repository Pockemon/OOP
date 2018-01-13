/* 
  HARDIK RANA
  
  program to create and print linked list using class concept in c++

*/

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node* next;
 };

 class linked_list
 {
  private:
         node *head,*tail;
  public:
         linked_list()
         {
          head=NULL;
          tail=NULL;
          }
          void insert(int a)
          {
           node *temp=new node;
           temp->data=a;
           temp->next=NULL;

           if(head==NULL)
           {
            head=temp;
            tail=temp;
           }
           else
           {
            tail->next=temp;
            tail=tail->next;
            }
           }
          void print()
          {
           node *temp=head;
           while(temp!=NULL)
           {
            cout<<(temp->data)<<" ";
            temp=temp->next;
            }
            }
    };

 int main()
 {
  linked_list a;
  while(1)
  {
   printf("enter your choice\n1]insert\n2]print\n3]exit\n");
   int c;
   scanf("%d",&c);
   switch(c)
   {
    case 1:
           printf("enter the number to be inserted\n");
           int n;
           scanf("%d",&n);
           a.insert(n);
           break;
    case 2:
            a.print();
            break;
    case 3:
            exit(1);
      }
    }
   return 0;

  }
