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


int main()
{
	int N, K;
	cin >> N >> K;
	bool visited[101] = { 0, };
	while (K--)
	{
		int cnt;
		cin >> cnt;
		while (cnt--)
		{
			int tmp;
			cin >> tmp;
			visited[tmp] = true;
		}
	}
	int ans = 0;
	for (int i = 1; i <= N; i++)
		if (!visited[i])ans++;
	cout << ans;
}
