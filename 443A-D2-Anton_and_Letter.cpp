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
	int len;
	string s;
	char x;
	vi a(26);
	getline(cin,s);
	for(int i=1;i<s.length()-1;i++)
		if(isalpha(s.at(i)))
			a[s.at(i)-'a'] = 1;
	cout<<count(all(a),1);
	return 0;
}
