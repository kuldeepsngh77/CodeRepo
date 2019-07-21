#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

typedef vector<int> vi;
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define tr(a) cout<<"Vector: "; for(auto i: a) cout<<i<<" "; cout<<"\n";

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;
	int len, sum=0, i;
	vi a(4);
	for(i=0;i<4;i++)
		cin>>a[i];
	cin>>s;
	len = s.length();
	for(i=0;i<len;i++)
		sum += a[s[i]-'0'-1];
	cout<<sum;
	return 0;
}
