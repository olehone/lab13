#include <iostream>

#define N 4
#define SQR(x) (x)*(x) //�������
#define THR(x) (x)*(x)*(x) //���
#define MAX(x,y) ((y)<(x))?(x):(y); //����� �����
#define MIN(y,z) ((y)<(z))?(y):(z) //����� ����
// ��������� ����������� �� �������� ������ �����
#define PRINT(w) cout<<"Control output: " << w << endl;
#define PRINTSTR(w) cout<< w <<endl;
#define MOD(x) fabs(x)
#define DOB2(x) (x*2)
#define SUM(x,y) (x+y)
#define RIZ(x,y) ((x)-(y))
 //  ��������� ������ |x|+|y|+|z|
#define MODS(x,y,z) (MOD(x)+MOD(y)+MOD(z)) 
#include <iostream>
using namespace std;
int main()
{
	PRINTSTR("Lab 13.2.4 Using macros and preprocessing directive")
		int a = 2;
	int b = 3;// ���� ��� ����������
	int c = N;
	double w;
	PRINT(a)
		PRINT(b)
		PRINT(N)
#if (1<N&&N<3) // ���� �����1 ��������, �� ����������� �����, ������� ���� #if
		w = MAX(MODS(a, b, c), THR(a));
	PRINTSTR(w)
#elif N>3 // ����������� ����� ���� #elif, ���� �����1 ������, a �����2 ��������
		w = MIN(SUM(DOB2(a), b), SQR(RIZ(DOB2(b), c)));
		PRINTSTR(w)
#else // ������ ����������� �����, ������� ���� #else
		PRINTSTR("Wrong z")
#endif;

		return 0;
}