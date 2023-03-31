#include <iostream>

using namespace std;
int main()
{
    char selection {};
    do
    {
        cout<<"========================"<<endl;
        cout<<"1: Robi cos..."<<endl;
        cout<<"2: Robi cos..."<<endl;
        cout<<"3: Robi cos..."<<endl;
        cout<<"Q: Wyjscie"<<endl;
        cout<<"========================"<<endl;
        cout<<"Wybierz opcje:"<<endl;
        cin >> selection;
        if(selection == '1')
        {
            cout<<"Wybrales opcje 1 ktora robi cos...\n";
        }
        else if(selection == '2')
        {
            cout<<"Wybrales opcje 2 ktora robi cos...\n";
        }
        else if(selection == '3')
        {
            cout<<"Wybrales opcje 3 ktora robi cos...\n";
        }
        else if(selection == 'Q' || selection == 'q')
        {
            cout<<"Do widzenia"<<endl;
        }
        else
        {
            cout<<"Taka opcja nie istnieje"<<endl;
        }
        cout<<"\n\n"<<endl;

    }
    while(selection != 'q' && selection != 'Q');




    return 0;
}