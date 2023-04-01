#include <iostream>

using namespace std;
int main()
{
    cout<<"\nCzesc, witam w firmie czyszczenie dywanow-Bartosz Lesniak"<<endl;
    cout << "Ile pokoji chcesz wyczyscic?"<< endl;
    int ilosc_pokji;
    cin >> ilosc_pokji;
    cout << "\nUslugi wystepuja nastepujaco\n";
    cout << "Wprowadzona ilosc pokoji "<< ilosc_pokji<<endl;
    cout << "Koszt uslugi za jeden pokoj wynosi "<<30<<"[PLN]"<<endl;
    cout << "Calkowity koszt uslugi wynosi "<< 30*ilosc_pokji<<"[PLN]"<<endl;
    cout << "Podatek "<<30*ilosc_pokji*0.06<<"[PLN]"<<endl;
    cout<<"Calkowity koszt wynosi "<< 30*ilosc_pokji + 30*ilosc_pokji*0.06 << "[PLN]" << endl;
}
