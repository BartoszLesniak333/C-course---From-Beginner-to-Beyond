#include <iostream>
#include <vector>
using namespace std;
int main()
{
/*
    for(int i = 1; i <=10 ;++i)
    {
        for(int j = 1; j<=10; ++j)
        {
            cout<<i*j<<"   ";
            if(j == 10)
                cout<<"\n";

        }
    }
*/
    int liczba_elementow{};
    cout<<"Jak duzo elementow chcesz przechowac?";
    cin>> liczba_elementow;

    vector<int> dane{};
    for(int i = 1 ; i<= liczba_elementow; ++i)
    {
        int dane_wartosci;
        cout<<"Wprowadz wartosc "<< i <<endl;
        cin>>dane_wartosci;
        dane.push_back(dane_wartosci);
    }
    for(auto wynik: dane)
    {
        for(int i{1};i<=wynik;++i)
        {
            if(i%2==0)
            {
                cout<<"-";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}