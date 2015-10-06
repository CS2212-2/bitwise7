#include <iostream>

using namespace std;

// Using xor property: a^b^b => a
void inplace_swap(int &a, int &b)
{
	a = a ^ b;	// a holds a_old ^ b_old
	b = a ^ b;	// b holds a_old which is (a_old ^ b_old) ^ b_old
	a = a ^ b;	// this line means a <--  (a_old ^ b_old) ^ a_old
			// since b holds a_old.
			// So, as a result, a gets the value of b_old.
}

int main()
{
	int a = 10, b = 20;
	cout << "init values:  a = " << a << " b = " << b << endl;

	inplace_swap(a,b);
	cout << "swap:  a = " << a << " b = " << b << endl;

	return 0;
}
