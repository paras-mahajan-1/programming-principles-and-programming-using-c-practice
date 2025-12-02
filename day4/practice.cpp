#include "std_lib_facilities.h"
int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i1;
    cout << c << " " << i1 << " " << c2 << "\n";

    double d1 = 2.3;
    double d2 = d1+2;
    if (d1>0)
	    cout << "d1 is negative\n";

    int a = 2000;
        c = a;
    int b = c;
    if (a != b)
	    cout << "oops!: "<< a << "!=" << b << "\n";
    else 
	    cout << "Wow! We have large characters\n";


    double d = 0;
    while (cin>>d) {   // repeat the statements below
	               // as long as we type in numbers
	    int i = d; // try to squeze a double into an int
	        c = i; // try to squeeze an int into a char
	    int i2 = c; // get the integer value of the character
	    cout << "d==" << d // the original value
	         << " i=="<< i
		 << " i2=="<< i2
		 << " char(" << c << ")\n";
    }
}
