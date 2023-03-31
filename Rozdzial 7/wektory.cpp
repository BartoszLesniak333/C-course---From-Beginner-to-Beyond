#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> wektor1{};
    vector <int> wektor2{};

    wektor1.push_back(10);
    wektor1.push_back(20);
    cout <<wektor1.at(0)<<" "<<wektor1.at(1)<<endl;
    cout <<wektor1.size()<<endl;
    wektor2.push_back(100);
    wektor2.push_back(200);
    cout <<wektor2.at(0)<<" "<<wektor2.at(1)<<endl;
    cout <<wektor2.size()<<endl;

    vector<vector<int>> wektor2D;
    wektor2D.push_back((wektor1));
    wektor2D.push_back((wektor2));
    cout << wektor2D.at(0).at(0) << " " << wektor2D.at(0).at(1) << endl;
    cout << wektor2D.at(1).at(0) << " " << wektor2D.at(1).at(1) << endl;

    return 0;

}