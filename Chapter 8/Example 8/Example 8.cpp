#include <iostream>
using namespace std;
int main()
{
    int a;
    int nizsza{10};
    int wyzsza{20};
    cout<<"Prosze wprowdzic liczbe pomiedzy "<<nizsza<<" a " << wyzsza <<endl;
    cin >>a;
    bool wynik = a > nizsza && a < wyzsza;
    cout << wynik;


    return 0;
}