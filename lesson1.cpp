#include <iostream>

using namespace std;
int main(int argv ,char *argc[])
{
    int number;
    cout << "Please inter a number: ";
    cin >> number;

    if((number % 2) == 0 )
    {
       cout << "zoj \n"; 
    } else {
        cout << "fard \n";
    }
}