#include <iostream>
#include <algorithm>
#define CASE_A 1.35
#define CASE_B 1.20
#define CASE_C 1.05
using namespace std;

int investment(int h, int y)
{
	if (y == 0)
		return h;
	if (y < 0)
		return 0;
	else
		return max(investment(h * CASE_A, y - 5), max(investment(h * CASE_B, y - 3), investment(h * CASE_C, y - 1)));
}

int main()
{
	int h, y;
	cin >> h >> y;
	cout << investment(h, y);
}