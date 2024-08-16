#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int diceA, diceB, diceC;
	cin >> diceA >> diceB >> diceC;

	int maxV = max(diceA, diceB);
	maxV = max(maxV, diceC);
	int tot = 0;
	if (diceA == diceB && diceB == diceC && diceC == diceA)
		tot = 10000 + diceA * 1000;

	else if (diceA == diceB || diceA == diceC)
		tot = 1000 + diceA * 100;

	else if (diceB == diceC)
		tot = 1000 + diceB * 100;

	else
		tot = maxV * 100;

	cout << tot << '\n';
	return 0;
}