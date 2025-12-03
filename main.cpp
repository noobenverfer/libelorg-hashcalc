// Simple calculator to find profit of cryptocurrency mining as well approximate the earnings in fiat currencies
// In the future, I will update it to connect to the Internet and retrieve the values it needs to work.
// Until then, this library is a very simple library, at most a calculator.
// Include the basic libraries needed for C++ - you know the gist
#include <iostream>
#include <stdlib.h>
#include <string>
// Include the library with all the functions in it
#include <C:\C++ Programs\elorg-hashcalc\libelorg-hashcalc.h>
// Thinger
using namespace std;
// Main function
int main(int argc, char *argv[])
{
    double thinger;
    thinger = calc(54000,6000000000,0,0,"monero");
    cout << thinger << endl;
    system("PAUSE");	
    return 0;
}


