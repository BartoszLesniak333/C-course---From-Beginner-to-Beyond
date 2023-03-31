#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> wek {-1,2,-1,3,-1,99,7,8,9};
    for(auto w:wek)
        if(w == 99)
            break;
        else if(w ==-1)
            continue;
        else
            cout << w <<endl;

    return 0;

}
