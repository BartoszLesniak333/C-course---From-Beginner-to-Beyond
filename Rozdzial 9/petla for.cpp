#include <iostream>

using namespace std;
int main() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    int sum{0};
    for(int i = 1 ; i<=15; i+=2)
        sum+=i;
    cout << sum<<endl;

    return sum;
}