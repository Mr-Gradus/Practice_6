#include <iostream>
#include <iomanip>
using namespace std;


//#################### TASK_1 ####################
int checkInt()
{
    while (true)
    {
        cout << "Enter an integer number: ";
        int x;
        cin >> x;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cerr << "Your input is invalid. Try again." << endl;
        }
        else
        {
            cin.ignore(32767, '\n');
            return x;
        }
    }
}





int main()
{
	cout << "#################### TASK_1 ####################" << endl << endl;

    int num = checkInt();

    cout << num << endl;
        
    

	cout << endl << "#################### TASK_2 ####################" << endl << endl;

	

	cout << endl << "#################### TASK_2 ####################" << endl << endl;

	

	return 0;
}