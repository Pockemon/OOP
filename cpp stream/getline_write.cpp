#include<bits/stdc++.h>
using namespace std;

int main()
{
  char arr[100];
  int n=20;
  /*
  if you take this as input getline will not ask user for string input,because it reads the '\n' at the end of first input as input and execute that '\n'

  cout<<"enter how many characters of string you want to enter including blank space"<<endl;
  cin>>n;

  */
  cout<<"enter string"<<endl;
  cin.getline(arr,n); //take size-1 characters including blank spaces


  //if you provide size attribute in write function more than length of string it will not give error.

  for(int i=1;i<=strlen(arr);i++)
  {
      cout.write(arr,i);
      cout<<"\n";
  }

}
