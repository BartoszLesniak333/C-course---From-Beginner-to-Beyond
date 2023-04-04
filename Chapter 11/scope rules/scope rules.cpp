#include <iostream>
#include<vector>
#include <string>
using namespace std;
void local_example();
void global_example();
void static_global_example();

int num{300};

void local_example(int x)
{
    int num{700};
    cout<<"Local num is "<<num<<" in local example-start"<<endl;
    num = x;
    cout<<"Local num is "<<num<<" in local example-end"<<endl;
}
void global_example()
{
    cout<<"Global num is "<<num<<" in global example-start"<<endl;
    num *= 2;
    cout<<"Global num is "<<num<<" in global example-end"<<endl;
}
void static_global_example()
{
    static int num{800000};
    cout<<"Local num is "<<num<<" in static_global_example-start"<<endl;
    num += 1000;
    cout<<"Local num is "<<num<<" in static_global_example-end"<<endl;
}
int main()
{
    int num{100};
    int num1{500};
    cout<<"Local num is "<<num<<" in main"<<endl;
    {
        int num{200};
        cout<<"Local num is "<<num<<" in inner block in main"<<endl;
        cout<<"Inner block in main can see out -num1 is: "<<num1<<endl;
    }
    cout<<"Local num is "<<num<<" in main"<<endl;

    cout<<endl;
    local_example(10);

    cout<<endl;
    global_example();
    cout<<endl;
    global_example();

    cout<<endl;
    static_global_example();
    cout<<endl;
    static_global_example();

    return 0;
}
