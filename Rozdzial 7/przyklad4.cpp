#include <iostream>
using namespace std;
int main()
{
    char samogloski[]={'a','o','e','y','i'};
    cout <<"Pierwsza samogloska jest "<< samogloski[0]<<endl;
    cout <<"Ostatnia samogloska jest "<< samogloski[4]<<endl;
    //cin >> samogloski[5]; TAK NIE RÓB!!!
    double temperatura[] = {90.1,87.7,89.9,73.9,88.5};
    cout << "Najwieksza temperatura wynosi: "<<temperatura[0]<<endl;
    temperatura[0]=100;
    cout <<"Najwieksza temperatura teraz wynosi "<<temperatura[0]<<endl;
    return 0;

}
