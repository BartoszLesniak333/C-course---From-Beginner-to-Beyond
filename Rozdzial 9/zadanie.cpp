#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector <int> date{};
    int a{0};
    int l{0};
    int c;
    int s{c};
    char choice;
    double mean{0};
    do
    {
        cout<<"=======================\n";
        cout<<"Q - Quit\n";
        cout<<"A - Add a number\n";
        cout<<"O - Open the airways\n";
        cout<<"M - Mean of the numbers\n";
        cout<<"L - Largest number\n";
        cout<<"S - Smallest number\n";
        cout<<"=======================\n";
        cout<<"Enter your choice:"<<" ";
        cin >> choice;

        switch (choice)
        {
            case 'A' :
            case 'a' :
            {
                cout << "Add a number\n";
                cin >> a;
                const int c = a;
                mean += a;
                date.push_back(a);
                if(l<a)
                {
                    l=a;
                }
                if(s>a)
                {
                    s=a;
                }
                cout << "\n\n";
                break;
            }
            case 'o':
            case 'O':
            {
                cout<<"Airways[";
                for(int a : date)
                {
                    cout<<a<<" ";
                }
                cout<<"]";
                cout<<"\n\n";
                break;
            }
            case 'm':
            case 'M':
            {
                double answer = mean/date.size();
                cout<<"The mean of the numbers is:"<< answer;
                cout<<"\n\n";
                break;
            }
            case 'l':
            case 'L':
            {
                cout<<"The largest number is:"<<l;
                cout<<"\n\n";
                break;
            }
            case 's' :
            case 'S' :
            {
                cout<<"The smallest number is:"<<s;
                cout<<"\n\n";
                break;
            }

            case 'q' :
            case 'Q' :
                cout<<"Goodbye\n";
                cout<<"\n\n";
                break;
            default:
            {
                cout<<"You pass wrong selection\n";
                cout<<"\n\n";
            }
        }
    }
    while(choice != 'Q' && choice !='q');
    {
        cout<<"\n\n";
    }

    return 0;
}