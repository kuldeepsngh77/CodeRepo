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
	cin>>s;
	int low=0;
	for(int i=0;i<s.length();i++){
		low += islower(s.at(i))?1:-1;
	}
	if(low>=0)
		transform(all(s),s.begin(),::tolower);
	else
		transform(all(s),s.begin(),::toupper);
	cout<<s;
	return 0;
}
