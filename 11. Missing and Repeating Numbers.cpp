#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	int r,m; 
	vector<int> temp(n+1,0);
	for(int i=0;i<n;i++){
		if(temp[arr[i]]==1){
			r=arr[i];
		} 
		temp[arr[i]]=1;
	}
	for(int i=1;i<temp.size();i++){
		if(temp[i]==0)
			m=i;
	}
	return {m,r};
}
