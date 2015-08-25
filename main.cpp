#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Hello world!";
    cout << "This is a simple program to test user name" << endl;

    string input;

    cout << "Please enter your name in order to be tested" <<endl;
    cin >> input;


        if (input == "bryan")
        {
            cout << "Welcome back!" <<endl;
        }
        else if (input == "louis" )
        {
            cout << "lovely name." << endl;
        }
        else if (input == "wilson")
        {
            cout << "great name!" << endl;
        }
        else
        {
            cout << "silly name!" <<endl;
        }


    return 0;
}
