#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	TComplex a;
	TComplex b(1);
	TComplex c(6, 8);
	TComplex d(c);

	TComplex ex;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "Copy c: " << "d = " << d << endl;

	cout << "\nSelf-entry into a: " << endl;
	cin >> a;
	cout << "a = " << a << endl;

	ex = a + c;
	cout << "\nAdd: a + c = (" << a << ") + (" << c << ") = " << ex << endl;

	ex = a - c;
	cout << "\nSubtract: a - c = (" << a << ") - (" << c << ") = " << ex << endl;

	ex = a * c;
	cout << "\nMultiply: a * c = (" << a << ") * (" << c << ") = " << ex << endl;

	ex = a / c;
	cout << "\nDivide: a * c = (" << a << ") / (" << c << ") = " << ex << endl;

	cout << "\nAppropriation: " << endl;
	cout << "d = " << d << "\t\ta = " << a << "\nd = a" << endl;
	d = a;
	cout << "d = " << d << "\t\ta = " << a << endl;

	cout << "\nComparison: a and c" << endl;
	if (a == c)
	{
		cout << "Equal" << endl;
	}
	if (a != c)
	{
		cout << "Not Equal" << endl;
	}

	cout << "\nModule: a and c" << endl;
	cout << "Module a = " << a.Abs() << endl;
	cout << "Module c = " << c.Abs() << endl;

	return 0;
}