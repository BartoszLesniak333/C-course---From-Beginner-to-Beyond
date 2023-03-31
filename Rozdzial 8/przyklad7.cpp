#include <iostream>

using namespace std;
int main()
{
    int number_1,number_2,number_3;
    cout<<"Prosze podac 3 liczby odzielone od siebie spacja"<<endl;
    cin >> number_1>>number_2>>number_3;
    int suma = number_1+number_2+number_3;
    const int ilosc_liczb{3};
    double srednia;
    srednia = static_cast<double>(suma)/ilosc_liczb;
    cout<<"Suma liczb wynosi "<<suma<<endl;
    cout<<"Srednia wynosi "<<srednia<<endl;
    return 0;
}