#include <iostream>
#include<string>
#include<iomanip>

using namespace std;
int main()
{
    string haslo {};
    string odszyfrowac;
    string zamiana{};
    string zamiana_2;
    string alfabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string klucz {"p#w^THf@lKj*MsNQzGc%yZvb$eYdx&VrJmUu!o)X(aE)i[SD{g}L+AR_-B]t;/1=24"};
    int opcja;
    cout<<"===============================================================\n";
    cout<<"Prosze podaj zdanie do zaszyfrowania: ";
    getline(cin,haslo);
    cout<<"Prosze podaj zdanie do odszyfrowania: ";
    getline(cin,odszyfrowac);
    cout<<"===============================================================\n";
    cout<<endl;

    for(int i = 0 ; i<haslo.size();++i)
    {
        if (haslo[i]==' ')
        {
            cout<<" ";
            zamiana += ' ';
        }
        for(int j = 0; j<=alfabet.size();++j)
        {
            if(haslo[i]==alfabet[j])
            {

                zamiana += klucz[j];
            }
        }
    }
    for(int i=0; i<odszyfrowac.size();++i)
    {
        if (odszyfrowac[i]==' ')
        {
            cout<<" ";
            zamiana_2 += ' ';
        }
        for(int j = 0; j<=klucz.size();++j)
        {
            if(odszyfrowac[i]==klucz[j])
            {

                zamiana_2 += alfabet[j];
            }
        }
    }

    cout<<"\n";
    do
    {
        cout<<"===============================================================\n";
        cout<<"wcisnij 1 aby zobaczyc zaszyfrowany kod\n";
        cout<<"wcisnij 2 aby zobaczyc odszyfrowany kod\n";
        cout<<"wcisnij 3 aby wyjsc\n";
        cout<<"Prosze wybrac opcje\n";
        cin>> opcja;
        cout<<"===============================================================\n";
        switch(opcja)
        {
            case 1:
            {

                cout<<"Zaszyfrowany kod wyglada nastepujaco:\n ";
                cout<<zamiana<<endl;
                break;
            }
            case 2:
            {
                cout<<"Odszyfrowany kod to:\n";
                cout<<zamiana_2<<endl;
                break;
            }

            case 3:
            {
                cout<<"Dowidzenia";
                break;
            }

        }
    }
    while(opcja != 3);
    return 0;
}