#include <iostream>
#include<string>
#include<vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector <string> v) ;

void pass_by_value1(int num)
{
    num = 1000;
}
void pass_by_value2(string s)
{
    s = "Changed";
}
void pass_by_value3(vector <string> v)
{
    v.clear(); // usuwa elementy wektora
}
void print_vector(vector <string> v)
{
    for(auto s:v)
    {
        cout<<s<<" ";
    }
}
int main()
{
    int num {10};
    int another_num{20};

    cout<<"num before calling pass_by_value1:"<<num<<endl;
    pass_by_value1(num);
    cout<<"num after calling pass_by_value1:"<<num<<endl;
}