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
	int n, c = 1, a, b, i;
	cin>>n>>a;
	for(i=1;i<n;i++){
		cin>>b;
		if(b != a){
			c++;
			a=b;
		}
	}
	cout<<c;
	return 0;
}
