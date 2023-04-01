#include <iostream>
#include<string>
#include<iomanip>

using namespace std;
int main()
{
    string a{};
    cout<<"Enter a pyramid element\n";
    cin>>a;
    for(int i = 1; i<=a.size();++i)
    {
        for(int o = 0;o<a.size()-i;++o)
        {
            cout<<" ";
        }
        cout<<a.substr(0,i);
        for(int j = i-2; j>=0;--j)
        {
            cout<<a[j];
        }
        cout<<"\n";
    }

    return 0;
}