#include<bits/stdc++.h>
using namespace std;

int main()
{

    // output file streams
    ofstream ofs1("country.txt");
    ofstream ofs2("capital.txt");


    char inp[250];
    int i = 0;
    cout<<"enter countries :\n";
    while(i++ < 3)
    {
    	cin.getline(inp, 100);
    	ofs1<<inp<<endl;
    }
    ofs1.close();

    i = 0;
    cout<<"enter capitals :\n";
    while(i++ < 3)
    {
    	cin.getline(inp, 100);
    	ofs2<<inp<<endl;
    }
    ofs2.close();


    // input file streams
    ifstream ifs1("country.txt");
    ifstream ifs2("capital.txt");

    i = 0;
    cout<<"countries\tcapitals"<<endl;
    while(i++ < 3)
    {
    	ifs1.getline(inp, 100);
    	cout<<inp<<" \t\t";
    	ifs2.getline(inp, 100);
    	cout<<inp;
    	cout<<endl;
    }

    ifs1.close();
   	ifs2.close();

    return 0;
}
