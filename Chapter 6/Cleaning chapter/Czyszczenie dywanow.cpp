#include <iostream>
using namespace std;

int main()
{
    int duze_pokoje {0};
    int male_pokje {0};
    int koszt_malych {25};
    int koszt_dyzych {35};
    double podatek{0.06};

    cout<<"Czesc, witam w firme czyszczacej dywany-Bartosz Lesniak "<<endl;
    cout<<"ile duzych pokoji chcesz wyczyscic " << endl;
    cin >> duze_pokoje;
    cout<<"ile malych pokoji chcesz wyczyscic " << endl;
    cin >>male_pokje;
    cout <<"Koszt za maly pokoj wynosi "<< koszt_malych << endl;
    cout <<"Koszt za duzy pokoj wynosi "<< koszt_dyzych << endl;
    cout <<"=================================================="<<endl;
    cout <<"Koszt to "<<(duze_pokoje * koszt_dyzych) + (male_pokje * koszt_malych)<<endl;
    cout <<"W tym podatek "<<((duze_pokoje * koszt_dyzych) + (male_pokje * koszt_malych))*podatek <<endl;
    cout <<"\nZatem calkowity koszt wynosi "<<(duze_pokoje * koszt_dyzych) + (male_pokje * koszt_malych) +
    ((duze_pokoje * koszt_dyzych) + (male_pokje * koszt_malych))*podatek <<endl;
    cout <<"\n";
    return 0;
}