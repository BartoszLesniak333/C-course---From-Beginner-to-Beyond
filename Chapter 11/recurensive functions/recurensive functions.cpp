#include <iostream>
using namespace std;
unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}

unsigned long long factorial(unsigned long long n)
{
    if(n==1)
    {
        return 1;
    }
    return n* factorial(n-1);
}


int main()
{
    cout<< fibonacci(5)<<endl;
    cout<< fibonacci(30)<<endl;
    cout<< fibonacci(40)<<endl;

    cout<<endl;

    cout<<factorial(4)<<endl;
    cout<<factorial(7)<<endl;
    cout<<factorial(9)<<endl;

}
