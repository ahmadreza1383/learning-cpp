#include <iostream>
using namespace std;

int main()
{
    srand((unsigned) time(NULL));

    int number = (rand() % 100);

    int test = 0;
    int testNumber = 1;
    int i = 0;

    while(test != number)
    {
        cout << "Test number " << testNumber << endl;
        cout << "Please inter your number: ";
        cin >> test;

        if(test == number){
            cout << "Currect";
            cout << "Try test your has " << testNumber << '\n';

            return 0;
        } else{
            cout << "Incurrect";
        }

        testNumber++;
    }
}