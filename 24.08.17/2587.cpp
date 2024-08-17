#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(5);

	for (int i = 0; i < 5; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());

	int avg = accumulate(v.begin(), v.end(), 0);
	int mid = v[2];

	cout << avg / 5 << '\n';
	cout << mid << '\n';



	return 0;
}