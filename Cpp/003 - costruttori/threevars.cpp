// header
#include <iostream>
using namespace std;

// sia una classe che prende un costruttore con 3 argomenti

// una classe con qualche test di sintassi semplice semplice
class ThreeVars
{
	public:
	int var_1, var_2, var_3;
	
	// costruttore semplice
	ThreeVars() : var_1(15), var_2(20), var_3(28) 
	{
		printVars();
	}
	
	// costruttore con 3 argomenti
	ThreeVars(int a1, int a2, int a3)
	{
		var_1 = a1;
		var_2 = a2;
		var_3 = a3;
		printVars();
	}

	// distruttore vuoto
	~ThreeVars() 
	{
		cout << "DESTROY." << endl;
	}
	
	private:
	void printVars()
	{
		cout << "1:" << var_1 << " 2:" << var_2 << " 3:" << var_3 << endl;
	}
};

class SixVars
{

	public:
	ThreeVars tv1, tv2;
	
	// costruttore vuoto
	SixVars()
	{
		cout << "ISTANCE SIXVARS empty constructor" << endl;
		tv1 = ThreeVars(1, 2, 3);
		tv2 = ThreeVars(4, 5, 6);
	}
	
	// costruttore con 2 argomenti
	SixVars(int v1, int v2)
	{
		cout << "ISTANCE SIXVARS - two value constructor" << endl;
		this->tv1 = ThreeVars(v1, v1, v1);
		this->tv2 = ThreeVars(v2, v2, v2);
	}
	
};

int main( int argc, char* argv[] )
{
	SixVars six(1, 1);
	
	return 0;
}
