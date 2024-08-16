#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tot = 0;
	int minV = INT_MAX;
	vector<int> v;
	for (int i = 0; i < 7; i++)
	{
		int input;
		cin >> input;

		if (input % 2 == 1)
		{
			tot += input;
			minV = min(minV, input);
			v.push_back(input);
		}
	}
	if (v.empty())
		cout << -1 << '\n';
	else
		cout << tot << '\n' << minV << '\n';

	return 0;
}