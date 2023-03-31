#include <iostream>
#include <cmath>
#include <cstdlib>
#include<ctime>

using namespace std;
int main()
{
    /*
    double number{};
    cout<<"enter a number (double)";
    cin>>number;

    cout<<"The sqrt of "<<number<<" is "<<sqrt(number)<<endl;
    cout<<"The cubed root of "<<number<<" is "<<cbrt(number)<<endl;

    cout<<"The sine of "<<number<<" is "<<sin(number)<<endl;
    cout<<"The cosine of "<<number<<" is "<<cos(number)<<endl;

    cout<<"The cell of "<<number<<" is "<<ceil(number)<<endl;
    cout<<"The floor of "<<number<<" is "<<floor(number)<<endl;
    cout<<"The round of "<<number<<" is "<<round(number)<<endl;

    double power{};
    cout<<"\nEnter a power to raise "<<number<<" to: ";
    cin>>power;
    cout<<number<<" raised to the "<<power<<" power is "<<pow(number,power)<<endl;

    cout<<endl;
     */
    int random{};
    size_t count{10};
    int min{1};
    int max{6};
    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
    srand(time(nullptr));

    for(size_t i{1};i<=count;++i)
    {
        random=rand()%max+min;
        cout<<random<<endl;
    }
    cout<<endl;
    return 0;

}
