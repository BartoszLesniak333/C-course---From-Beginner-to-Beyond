#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <char> samogloski{'a','e','y','i','o'};
    cout << samogloski[0]<< endl;
    cout << samogloski[4] << endl;

    cout<<"\n";

    vector <int> liczby{100,90,80};
    cout<<"wyniki testow przy uzyciu skladni tablicowej"<<endl;
    cout<<liczby[0]<<"\n"<<liczby[1]<<"\n"<<liczby[2]<<endl;

    cout<<"\n";

    cout<<"wyniki testow przy uzyciu skladni wektorowej "<<endl;
    cout<<liczby.at(0)<<"\n"<<liczby.at(1)<<"\n"<<liczby.at(2)<<endl;
    cout<<"W tym  wektorze sa "<<liczby.size()<<" rodzaje zmiennych"<<endl;

    cout<<"\n";

    cout<<"Wprowadz nowe wartosci do wektora"<<endl;
    cin>>liczby.at(0);
    cin>>liczby.at(1);
    cin>>liczby.at(2);
    cout<<"Teraz wyswietlimy nowe wartosci w wektorze"<<endl;
    cout<<liczby.at(0)<<"\n"<<liczby.at(1)<<"\n"<<liczby.at(2)<<endl;

    cout<<"\n";

    cout<<"Wprowadz dodatkowa wartosc do wektora"<<endl;
    int dodatkowa{0};
    cin>>dodatkowa;
    liczby.push_back(dodatkowa);
    cout<<"Wprowadz jeszcze jedna wartosc do wektora"<<endl;
    cin>>dodatkowa;
    liczby.push_back(dodatkowa);
    cout<<liczby.at(0)<<"\n"<<liczby.at(1)<<"\n"<<liczby.at(2)<<liczby.at(3)<<"\n"<<liczby.at(4)<<endl;
    cout<<"Wartosc przechowywanych zmiennychh w wektorze wynosi teraz "<< liczby.size()<<endl;

    cout<<"\n";

    vector<vector<int>> przyklad
            {{1,2,3},
             {4,5,6},
             {7,8,9}
            };
    cout << "Oto wywolanie wektorow 2D"<<endl;
    cout <<przyklad.at(0).at(0)<<endl;
    cout <<przyklad.at(0).at(1)<<endl;
    cout <<przyklad.at(0).at(2)<<endl;
    cout <<przyklad.at(1).at(0)<<endl;
    cout <<przyklad.at(1).at(1)<<endl;
    cout <<przyklad.at(1).at(2)<<endl;
    cout <<przyklad.at(2).at(0)<<endl;
    cout <<przyklad.at(2).at(1)<<endl;
    cout <<przyklad.at(2).at(2)<<endl;
    return 0;

}
