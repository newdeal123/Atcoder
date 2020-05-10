#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <queue>
#include <limits.h>
using namespace std;
typedef long long ll;
const int MAX_N = 200000 + 2;
ll sum[MAX_N] = { 0, }, A[MAX_N];

int main()
{
	ll N, ans = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		if (i - A[i] >= 1)sum[i - A[i]]++;
	}
	for (int i = 1; i <= N; i++)
	{
		if (i + A[i] < MAX_N)
		{
			//cout << "i=" << i << "," << sum[i+A[i]] << endl;
			ans += sum[i+A[i]];
		}
		
	}
	cout << ans;
}
