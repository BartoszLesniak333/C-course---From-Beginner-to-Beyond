#include <iostream>

using namespace std;
int main()
{

    int count;

    cout<<"Enter an amount in cents:"<<" "<<endl;
    cin >> count;
    if(count >= 0)
    {
        cout<<"You can provide change for this change as follows"<<endl;
        int $ = (count/100)*100;
        cout <<"dollars:"<<" "<< count/100<<endl;
        int quarters = ((count - $)/25)*25;
        cout <<"quarters:"<<" "<< (count - $)/25 <<endl;
        int dimes = ((count - $ - quarters)/10)*10;
        cout <<"dimes:"<<" "<< (count - $ - quarters)/10 <<endl;
        int nickles = ((count - $ - quarters - dimes)/5)*5;
        cout <<"nickles:"<<" "<< (count - $ - quarters - dimes)/5 <<endl;
        int penies = ((count - $ - quarters - dimes - nickles));
        cout <<"nickles:"<<" "<< penies <<endl;
    }
    else
    {
        cout<<"The number is negative"<<endl;
    }

    return 0;
}