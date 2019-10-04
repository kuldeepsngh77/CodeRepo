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
	cin>>s;
	int count, len=s.length(), c;
	c = abs(s.at(0) - 'a');
	count = c = min(c,26-c);
	for(int i=1; i<len; i++){
		c = abs(s.at(i)- s.at(i-1));
		c = min(c, 26-c);
		count += c;
	}
	cout<<count;
	return 0;
}

/*Another Solution*/
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	char p, curr = 'a';
	int c = 0;
	while(cin>>p){
		c += min(abs(p-curr), 26-abs(p-curr));
		curr = p;
	}
	cout<<c;
	return 0;
}
