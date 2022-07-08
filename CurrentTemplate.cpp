#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define ld long double
#define pb push_back
#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define EACH(x, a) for(auto& x: a)
#define max_all *max_element
#define min_all *min_element 
#define vll std::vector<ll>
#define str std::string
// bool is_prime(ll x){for(int i=2;i*i<=x;i++) if(x%i==0) return 0; return 1;}
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
void vin(vector<int> &v,int m){for (int i = 0; i < m; ++i){int x;cin>>x;v.push_back(x);}}
void vin(vector<ll> &v,int m){for (int i = 0; i < m; ++i){ll x;cin>>x;v.push_back(x);}}
void vin(vector<char> &v,int m){for (int i = 0; i < m; ++i){char x;cin>>x;v.push_back(x);}}
void vout(vector<int> &v){for (int i = 0; i < v.size(); ++i){cout<<v[i]<<" ";}}
void vout(vector<ll> &v){for (int i = 0; i < v.size(); ++i){cout<<v[i]<<" ";}}
void vout(vector<char> &v){for (int i = 0; i < v.size(); ++i){cout<<v[i]<<" ";}}
std::string trim(const std::string &s){auto start = s.begin();while (start != s.end() && std::isspace(*start)) {start++;}auto end = s.end();do {end--;} while (std::distance(start, end) > 0 && std::isspace(*end));return std::string(start, end + 1);}
void showset(set<int> &s){for(auto x:s){cout<<x<<" ";}cout<<endl;}
void showunset(unordered_set <int> &u){for(auto x:u){cout<<x<<" ";}cout<<endl;}
template<class T> void read(T& x) {
	cin >> x;
}
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
int main(){
	FAST
	int t;
	read(t);	
	for(int qqq=1;qqq<=t;qqq++){
		// cout<<"Case #"<<qqq<<": ";
	}
}
// Solution By Sohail kasmani