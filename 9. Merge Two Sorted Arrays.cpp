#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i=m-1,j=n-1;
	int idx=m+n-1;
	while(i>=0 or j>=0){
		if(arr1[i]<arr2[j])
			arr1[idx--]=arr2[j--];
		else
			arr1[idx--]=arr1[i--];
	}
	while(i>=0)	arr1[idx--]=arr1[i--];
	while(j>=0)	arr1[idx--]=arr2[j--];
	return arr1;
}