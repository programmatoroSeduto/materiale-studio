#include <iostream>
#include "singlevar.h"
using namespace std;

int main( int argc, char* argv[] )
{
	cout << "001 - classes - overall structure of the code" << endl;
	
	cout << "constructor: (singleVar) s" << endl;
	singleVar s;
	cout << "set value" << 15 << endl;
	s.set( 15 );
	cout << "actual value: s=" << s.get( ) << endl;
	cout << "set value" << 24 << endl;
	s.set( 24 );
	cout << "actual value: s=" << s.get( ) << endl;
	
	return 0;
}
