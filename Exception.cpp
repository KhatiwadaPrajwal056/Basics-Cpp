
#include <iostream>
using namespace std;
int main()
{
    float x,y,result ;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    // try block
	try {
        // check if denominator is 0 then throw runtime
		if (y == 0) {
			throw y;   // throwing an exception
			cout << " Never executed \n"; // immediately terminates the current function and starts finding a matching catch block
		}
        // Calculates result if no exception occurs
        result = x/y;
        cout << "Result after division: " << result << endl;

	}
	// catch block to catch the thrown exception
	catch (float y) {
        // Print the Exception
		cout << "Exception Caught : denominator can't be zero\n";
	}
	return 0;
}
