#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int year;
	cin >> year;

	bool isYoon = false;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		isYoon = true;

	if (isYoon)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}