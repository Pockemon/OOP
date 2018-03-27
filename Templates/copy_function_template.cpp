#include<bits/stdc++.h>

using namespace std;

template<class T>
void copy(T a[],T b[],int n)
{
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
}

template <class T1, class T2>
void copy(T1 a[], T2 b[], int n) {

	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

int main()
{
    int a1[5],b1[5];
    printf("enter elements of array1\n");
    for(int i=0;i<5;i++)
    {
        cin>>a1[i];
    }
    copy(a1,b1,5);
    cout<<"contents of array2"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b1[i]<<" ";
    }
    cout<<endl;

    char c1[5];
    int d1[10];

    printf("enter elements of array3\n");
    for(int i=0;i<5;i++)
    {
        cin>>c1[i];
    }

    copy(c1,d1,5);
    //convert character into their equivalent ASCII
    cout<<"contents of array4"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<d1[i]<<" ";
    }
    cout<<endl;

}
