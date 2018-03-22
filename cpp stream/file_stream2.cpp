#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream ofs("file2.txt");
    ofs<<"write1"<<endl;
    ofs<<"write2"<<endl;
    //ofs.close();                     //uncomment this line and see the difference between two outputs

    // read from the file
    char res[50];
    ifstream ifs("file2.txt");
    ifs.getline(res, 50);
    cout<<res<<endl;
    ifs.getline(res, 50);
    cout<<res<<endl;
    ifs.close();

    // opening file without closing the previous stream
    // does not give error but does not allow writing into the file
    ofs.open("file2.txt");
    ofs<<"write3"<<endl;
    ofs.close();
    ifs.open("file2.txt");
    ifs.getline(res, 50);
    cout<<res<<endl;

    return 0;
}
