#include <iostream>
#include <iomanip>
using namespace std;


//#################### TASK_1 ####################
int checkInt()
{
    while (true)
    {
        cout << "Enter an integer number: " << endl;
        int x;
        cin >> x;
            
        if (cin.fail() || cin.get() != '\n')
        {
            cin.clear();
            cin.ignore(9999, '\n');
            cerr << "Your input is invalid. Try again." << endl;
        }
        else
        {
            cout << "Your int number: " << x << endl;
            return x;
        }
         
    }

}





int main()
{
	cout << "#################### TASK_1 ####################" << endl << endl;
    
        checkInt();

        //cout << "Your int number: " << num << endl;
    
    

	cout << endl << "#################### TASK_2 ####################" << endl << endl;

	

	cout << endl << "#################### TASK_2 ####################" << endl << endl;

	

	return 0;
}