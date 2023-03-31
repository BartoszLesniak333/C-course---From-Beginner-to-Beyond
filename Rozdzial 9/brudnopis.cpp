#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec{10,3,4};
    int result{0};
    if( vec.size() == 0 || vec.size() == 1)
    {
        result = 0;
    }
    else
    {
        for(int i{0};i<vec.size();++i)
        {
            for(int j{i+1}; j<vec.size();++j)
            {
                result += vec[i]*vec[j];
            }
        }
    }
    cout <<result;
    return 0;
}