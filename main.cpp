#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Hello world!" <<endl ;
    cout << "This is a simple program to test user name.\n" << endl;

    string input;
    int x =0;

    do
    {
    cout << "Please enter your name in order to be tested: ('exit' to quit)" <<endl;
    cin >> input;

        if (input == "bryan")
        {
            cout << "Welcome back!\n" <<endl;
            x =1;
        }
        else if (input == "louis" )
        {
            cout << "lovely name.\n" << endl;
            x =1;
        }
        else if (input == "wilson")
        {
            cout << "great name!\n" << endl;
            x =1;
        }
        else if (input == "exit")
        {
            system("cls");
            cout << "Goodbye. See you again next time!" <<endl;
            return 0;
        }
        else
        {
            cout << "silly name!\n" <<endl;
            x =1;
        }
    }while (x != 0);
}
