#include<bits/stdc++.h>

using namespace std;

class st
{
private:
    static st *instance;
    int data;
    st() {}
public:
    static st *Instance()
    {
        if(instance==NULL)
        {
            instance = new st();
        }
        return instance;
    }

    void setdata(int value)
    {
        data=value;
    }
    int getdata()
    {
        return data;
    }
};

st *st::instance = NULL;

int main()
{
    st::Instance()->setdata(10);

    cout<<"DATA="<<st::Instance()->getdata()<<endl;
}
