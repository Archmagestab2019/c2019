#include <iostream>
#include <cmath>

using namespace std;

double f(double x)
{
	return (x / 6 + x / 12 + x / 7 + 5 + x / 2 + 4);
}

int main()
{
	//����ⲻ���ǽⷽ������ֱ�����84��QAQ
	double age = 1;
	while (abs(f(age) - age) > 0.01)
		age++;
	cout << age;
}
