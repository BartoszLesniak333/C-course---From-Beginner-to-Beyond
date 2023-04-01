#include <iostream>

using namespace std;
int main()
{
    /*
    int number{};
    cout<<"Enter a value"<<endl;
    cin >> number;
    cout << number<< " is "<<((number % 2 == 0) ? "even" : "odd");
     */
    int number_1{},number_2{};
    cout<<"Please enter two numbers"<<endl;
    cin >> number_1>>number_2;
    cout<<"Bigger is "<< ((number_1 > number_2) ? number_1:number_2)<<endl;
    cout<<"Smallest is "<< ((number_1 < number_2) ? number_1:number_2)<<endl;
    return 0;
}