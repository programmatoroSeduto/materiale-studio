#include <iostream>
using namespace std;

class singleVar
{
	public:
		// constructor (empty constructior is mandatory)
		singleVar( );
		//destructor (not mandatory)
		//~singleVar( );
		
		// set var
		void set( int value );
		// get var
		int get( );
	
	private:
		// the value
		int x;
};
