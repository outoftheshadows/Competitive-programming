#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1

//void file(){

//	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt" , "r" , stdin);
//	freopen("output.txt" , "w" , stdout);
//	#endif
//}

//int fact(int n){
//	if(n==0 || n==1)
//		return 1;
//	else return n*fact(n-1);
//}

//int comb(int n , int r){
//	return (fact(n)/(fact(r)*fact(n-r)));
//}

int32_t main(){	
	//file();
	int n,m;
	cin >> n >> m;
	int ans = 0;
	if(n >= 2){
		ans +=(n*(n-1)/2);
	}
	if(m>=2){
		ans+=(m*(m-1)/2);
	}
	cout << ans << endl;

}
