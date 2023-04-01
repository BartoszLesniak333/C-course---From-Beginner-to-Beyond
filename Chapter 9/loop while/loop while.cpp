#include <iostream>

using namespace std;
int main()
{
    int number{0};
    cout<<"Enter a number "<<endl;
    cin>>number;
/*
    while(number>0)
    {
        cout<<number<<endl;
        --number;
    }
    cout<<"Blastoff"<<endl;
*/
/*
    int i{1};
    while(number>=i)
    {
        cout << i << endl;
        ++i;
    }
    cout<<"Blastoff";
*/
/*
    cout<<"===================================="<<endl;
    cout<<"Enter a number less than 100 "<<endl;
    cin>>number;
    while(number >= 100)
    {
        cout<<"Enter a number less than"<<endl;
        cin>>number;
    }
    cout<<"Thanks"<<endl;
*/
    bool done {false};
    int number_1{0};
    while(!done)
    {
     cout<<"Enter a number between 1 and 5"<<endl;
     cin>> number_1;
     if(number_1<=1||number_1>=5)
     {
        cout<<"Out of the range, try again!"<<endl;
     }
     else
     {
         cout<<"Thanks"<<endl;
         done = true;
     }
    }
    return 0;
}