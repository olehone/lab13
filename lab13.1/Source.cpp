#include <iostream>
#include <math.h>
#include <iomanip>
#include "Header.h"
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int Er(int x1, int x2)
{
	if (x1 < x2)
		return 1;
	else return 0;
}
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	if (!Er(x_p, x_k))
	{
		cout << "Wrong x_p and x_k" << endl;
		return 0;
	}
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << x << " "
			<< s << " "
			<< exp(x*x) << " "
			<< n << endl; // тут слід використовувати форматний вивід
		x += dx;
	}
	cin.get();
	return 0;
}