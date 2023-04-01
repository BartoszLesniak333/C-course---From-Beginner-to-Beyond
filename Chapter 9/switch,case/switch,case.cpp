#include <iostream>
using namespace std;
int main()
{
    int ocena;
    cout<<"Wprowadz zdobyta ocene"<<endl;
    cin >> ocena;
    switch (ocena)
    {
        case 6:
            cout<<"Wow, musiales bardzo duzo sie uzcyc, gratulacje"<<endl;
            break;
        case 5:
            cout<<"Bardzo dobrze, musiales bardzo duzo sie uzcyc,ale popelniles maly blad, gratulacje"<<endl;
            break;
        case 4:
            cout<<"Dobrze, widac ze przygotowales sie na ten test, gratulacje"<<endl;
            break;
        case 3:
            cout<<"Ta ocena wskazuje na to ze zerknales na material, nastepnym razem sie postaraj"<<endl;
            break;
        case 2:
            cout<<"Udalo ci sie zdac ledwo co, uwazaj i nie olewaj testu, nauka poplaca"<<endl;
            break;
        case 1:
        {
            char niedostateczny{};
            cout<<"Jestes pewien? (Y/N)";
            cin>>niedostateczny;
            if(niedostateczny == 'Y' || niedostateczny == 'y')
                cout<<"Okej, jestes jebanym debilem";
            else if(niedostateczny == 'N' || niedostateczny == 'n')
                cout<<"Okej, w takim razie podejdz do nauczycielki i zapytaj o to";
            else
                cout<<"Wprowadziles zla odpowiedz";
            break;
        }
        default:
            cout<<"Taka ocena nie istnieje!!!"<<endl;
    }

    
    
    
    return 0;
}