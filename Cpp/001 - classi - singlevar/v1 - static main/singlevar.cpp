//include <iostream>
#include "singlevar.h"
using namespace std;

// constructor
singleVar::singleVar( ) 
{ 
	x = 0;
}

// set
int singleVar::get( )
{
	return x;
}

// get
void singleVar::set( int value )
{
	x = value;
}
