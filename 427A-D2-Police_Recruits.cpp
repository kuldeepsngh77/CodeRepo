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
	int i, a, n, c=0,ct=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		c += a;
		if(c<0){
			ct++;
			c=0;
		}
	}
	cout<<ct;
	return 0;
}
