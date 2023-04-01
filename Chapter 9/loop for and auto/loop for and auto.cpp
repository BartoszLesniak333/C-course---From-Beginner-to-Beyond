#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int scores[3]={90,100,40};
    for(auto score:scores)
        cout<<score<<endl;
    cout<<"======================================"<<endl;
    vector <double> temperatures{100.3,97.8,89.9,98.9};
    double average_temp{0};
    double running {0};
    int size{0};
    for(auto temp:temperatures)
    {
       running += temp;
       ++ size;
    }
    average_temp = (running/size);
    cout<<fixed<<setprecision(1);
    cout<<"srednia temperatura wynosi "<<average_temp<<endl;

    cout<<"============================================="<<endl;
    for(auto c:"Frank")
        cout<<c<<endl;
    cout<<"============================================="<<endl;
    for(auto c: "This is a test")
        if(c != ' ')
            cout<<c;
    cout<<"\n";
    cout<<"============================================="<<endl;
    for(auto c: "This is a test")
        if(c == ' ')
            cout<<"\t";
        else
            cout<<c;

    return 0;

}