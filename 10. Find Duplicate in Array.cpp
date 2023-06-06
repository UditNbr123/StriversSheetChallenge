#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int i=0;
	while(i<n){
		if(arr[i]!=arr[arr[i]])
			swap(arr[i],arr[arr[i]]);
		else if(arr[i]==arr[arr[i]])
			return arr[i];
		else i++;
	}
	return 0;
}
