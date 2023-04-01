#include <iostream>
using namespace std;
int main()
{
    const double zlotowka = 4.68;
    cout<<"\nWitamy w Zamianie wartosci walut\n";
    cout<<"\nProsze podac wartosc w Euro";
    double euro{0};
    cin>>euro;
    double zamiana = zlotowka*euro;
    cout<<"W przeliczeniu na kurs z dnia 23.03.2023 ilosc " <<euro<<" Euro wynosi "<<zamiana<<" PLN"<<endl;


    return 0;
}