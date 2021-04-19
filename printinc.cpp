#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl '\n'
#define ALL(a)              a.begin(), a.end()
#define ALLN(a, n)          (a, a+n)
#define MAX                 10000007
#define MIN                 -10000007
#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vii             vector<pii>
#define mii             map<ll,ll>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

ll hcf(ll n1, ll n2) {if (n2 != 0)return hcf(n2, n1 % n2); else return n1;}
ll fact(ll n) { ll i = 1, co = 1; for (i = 1; i <= n; i++)co *= i; return co;}
ll isprime(ll n) {
	if (n <= 1) return 0; if (n <= 3) return 1; if (n % 2 == 0 || n % 3 == 0) return 0;
	for (ll i = 5; i <= sqrt(n); i += 6) { if (n % i == 0 || n % (i + 2) == 0) return 0; } return 1;
}
ll sod(ll n) {ll sum = 0; while (n) {sum += n % 10; n /= 10;} return sum;}


ll dx[] = { -1, 0, 1, 0};
ll dy[] = {0, 1, 0, -1};


void  fun(ll n) {
	if (n == 0) {
		return ;
	}
	fun(n - 1);
	cout << n << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	int t;
	t = 1;
	//cin>>t;
	while (t--) {
		ll n;
		cin >> n;
		fun(n);



	}

	return 0;
}
