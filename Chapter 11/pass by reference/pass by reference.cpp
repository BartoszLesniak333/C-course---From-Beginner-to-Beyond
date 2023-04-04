#include <iostream>
#include<vector>
#include <string>
using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num)
{
    num = 1000;
}
void pass_by_ref2(string &s)
{
    s = "Changed";
}
void pass_by_ref3(vector<string> &v)
{
    v.clear();
}
void print_vector(const vector<string> &v)
{
    for(auto s:v)
    {
        cout<<s<<" ";
    }
    cout<<endl;
}
int main()
{
    int num{10};
    int another_num{20};

    cout<<"Number before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"Number after calling pass_by_ref1: "<<num<<endl;

    cout<<"\nanother num before calling pass_by_re1: "<<another_num<<endl;
    pass_by_ref1(another_num);
    cout<<"another_num after calling pass_by_ref1: "<<another_num<<endl;

    string name("Frank");
    cout<<"\n name before calling pass_by_ref2: "<<name<<endl;
    pass_by_ref2(name);
    cout<<"name after calling pass_by_ref2: "<<name<<endl;

    vector <string> stooges {"Larry","Moe","Curly"};
    cout<<"\n stooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"\n stooges after calling pass_by_ref3: ";
    print_vector(stooges);
    cout<<endl;
    return 0;
}