#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int> mp;
	for(int i=0;i<n;i++)
		mp[arr[i]]++;
	int s=n/2;
	for(auto x:mp){
		if(x.second>s)
			return x.first;
	}
	return -1;

}