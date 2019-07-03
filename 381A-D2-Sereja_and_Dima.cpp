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
	int n, k, i, j, c1=0, c2=0;
	cin>>n;
	vi a(n);
	for(i=0;i<n;i++)
		cin>>a[i];
	i=0;
	j=n-1;
	k=0;
	while(i<=j){
		if(k&1){
			if(a[i] > a[j])
				c2 += a[i++];
			else
				c2 += a[j--];
		}
		else{
			if(a[i] > a[j])
				c1 += a[i++];
			else
				c1 += a[j--];
		}
		k++;
	}
	cout<<c1<<" "<<c2;
	return 0;
}
