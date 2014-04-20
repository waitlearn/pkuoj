#include <iostream>
using namespace std;
int main()
{
    int nCase, nFeet; //nCase means the number of tests, nFeet is the input
    cin >> nCase;
    for (int i = 0; i < nCase; i++)
    {
        cin >> nFeet;
        if ( nFeet % 2 !=0)
	    cout << "0 0" << endl;
	else if ( nFeet % 4 != 0)
	    cout << nFeet / 4 + 1 << " " << nFeet / 2 << endl;
	else 
	    cout << nFeet / 4 << " " << nFeet / 2 << endl;
    }
    return 0;
}
	    
