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
const int MAX_N = 100000 + 2;
int N, M, height[MAX_N], cnt = 0;
vector<int>adj[MAX_N];
bool visited[MAX_N] = { 0, };

int main()
{
	cin >> N >> M;
	vector<pair<int, int>>v;
	for (int i = 1; i <= N; i++)
	{
		cin >> height[i];
		v.push_back({ -height[i],i });
	}
	while (M--)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	sort(v.begin(), v.end());
	for (auto i : v)
	{
		int h = -i.first, idx = i.second;
		if (visited[idx])continue;
		visited[idx] = true;
		bool isGood = true;
		for (auto next : adj[idx])
		{
			if (h <= height[next])
			{
				isGood = false;
				break;
			}
			visited[next] = true;
		}
		if (isGood)cnt++;
	}
	cout << cnt;
}
