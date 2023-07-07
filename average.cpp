#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    int number = 0;
    int triesNumber = 1;
    cout << "Exit with enter number 0: \n";
    while(i != 0){
        cout << "Please inter your number: \n";
        cin >> number;

        if(number == 0){
            cout << "Tries you: \n";
            triesNumber -=1;

            break;
        }

        sum += number;
        triesNumber +=1;
    }

    cout << sum << " " << triesNumber << endl;
    int avarage = 0;

    avarage = sum / triesNumber;
    cout << "Your avarage has: " << avarage << endl;
}