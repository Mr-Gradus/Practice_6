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

//#################### TASK_2 ####################

template<class T, class S>
basic_ostream<T, S>& endll(basic_ostream<T, S>& os)
{
    os.put(os.widen('\n'));
    os.put(os.widen('\n'));
    os.flush();

    return os;
}

int main()
{
	cout << "#################### TASK_1 ####################" << endl << endl;
    
        checkInt();
                

	cout << endl << "#################### TASK_2 ####################" << endl << endl;

    cout << "Hello," << endll;
    cout << "world!";

	

	

	return 0;
}