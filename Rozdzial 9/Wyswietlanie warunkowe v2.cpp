#include <iostream>

using namespace std;

int main()
{
    for(int i{1}; i <= 100; ++i )
    {
        cout<<i;
        if( i % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }
    cout<<"\n\n\n";
    for(int j{1}; j<=100;++j)
    {
        cout<<j;
        cout<<((j%10 == 0) ? "\n":" ");
    }
    return 0;
}

