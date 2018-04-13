#include<bits/stdc++.h>
using namespace std;

class matrix
{
    int row,col;
    int a[50][50];
public:
    void getdata(void);
    matrix operator+(matrix);
    matrix operator-(matrix);
    int operator==(matrix);
    friend ostream & operator << (ostream &,matrix &);
};

void matrix::getdata(void)
{
    cout<<"enter number of rows"<<endl;
    cin>>row;
    cout<<"enter number of columns"<<endl;
    cin>>col;

    cout<<"enter elements of matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
}

int matrix::operator ==(matrix am)
{
    if(am.col==col && am.row==row)
        return 1;
    else
        return 0;
}

matrix matrix::operator +(matrix dm)
{
   matrix temp;
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            temp.a[i][j]=a[i][j]+dm.a[i][j];
        }
        temp.row=row;
        temp.col=col;
    }
    return temp;
}

matrix matrix::operator -(matrix dm)
{
   matrix temp;
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            temp.a[i][j]=a[i][j]-dm.a[i][j];
        }
        temp.row=row;
        temp.col=col;
    }
    return temp;
}

ostream & operator <<(ostream & fout,matrix & d)
{
    for(int i=0;i<d.row;i++)
    {
        for(int j=0;j<d.col;j++)
        {
            fout<<d.a[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return fout;
}

int main()
{
    matrix m1,m2,m3,m4;

    m1.getdata();
    m2.getdata();

    if(m1==m2)
    {
        m3=m1+m2;
        cout<<"addition of two matrices is "<<endl;
        cout<<m3<<endl;

        m4=m1-m2;
        cout<<"substraction of two matrices is "<<endl;
        cout<<m4<<endl;
    }
    else
    {
        printf("not possible");
    }
    return 0;
}
