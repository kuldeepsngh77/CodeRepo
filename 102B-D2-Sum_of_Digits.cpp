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
	cin.tie(NULL);
	string s;
	int len, c=0, sum;
	cin>>s;
	while(s.length() > 1){
		sum = 0;
		for(int i=0;i<s.length();i++)
			sum += s[i]-'0';
		s = to_string(sum);
		c++;
	}
	cout<<c;
	return 0;
}
