#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <ctype.h>
#include <cctype>
using namespace std;
int Diapazone(int x, int l, int r)
{
	assert(l + 48 <= x && r + 48 >= x && "Number isn't in diapazone");
	return 1; // повертає 1 якщо успішно
}
void OpenFile(const char*filename, int & alnum,int &alpha, int &ascii, int& cntrl, int& digit, int& punct, int& space, int& lower, int &upper, int left, int right)
{
	ifstream f(filename);
	if (!f)
	{
		cerr << "file \"f.txt\" not found" << endl;
		return;
	}
	char x;
	while (f>>x)
	{
		if (isalnum(x))
			alnum++;
		if (isalpha(x))
			alpha++;
		if (isascii(x))
			ascii++;
		if (iscntrl(x))
			cntrl++;
		if (isdigit(x))
		{
			Diapazone(x, left, right);
			digit++;
		}
		if (isspace(x))
			space++;
		if (islower(x))
			lower++;
		if (isupper(x))
			upper++;
	}
	cout << "alnum|alpha|ascii|cntrl|digit|punct|space|lower|upper" << endl;
	cout << setw(5) << alnum << "|" << setw(5) << alpha << "|" << setw(5) << ascii << "|" << setw(5) << cntrl << "|" << setw(5) << digit << "|" << setw(5) << punct << "|" << setw(5) << space << "|" << setw(5) << lower << "|" << setw(5) << upper << endl;
}
int main()
{
	int alnum =0, alpha=0, ascii = 0, cntrl = 0, digit = 0, punct = 0, space = 0, lower = 0, upper = 0;
	int l, r;
	cout << " Diapazone from: "; cin >> l;
	cout << endl << " To: "; cin >> r; cout << endl;
	char filename[61];
	cin.get();
	cin.sync();
	cout << "Enter file name : ";
	cin.getline(filename, sizeof(filename));
	OpenFile(filename, alnum, alpha, ascii, cntrl, digit, punct, space, lower, upper, l, r);

}