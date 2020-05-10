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
const int MAX_N = 126;

int main()
{
	ll K;
	cin >> K;
	for (ll i = -MAX_N; i <= MAX_N; i++)
	{
		for(ll j=-MAX_N;j<=MAX_N;j++)
			if (i*i*i*i*i - j*j*j*j*j == K)
			{
				cout << i << " "<<j;
				return 0;
			}
	}
}
