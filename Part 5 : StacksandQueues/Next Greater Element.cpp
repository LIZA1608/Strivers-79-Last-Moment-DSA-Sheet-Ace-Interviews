#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	vector<int>ans(n);
	stack<int>s;
	for(int i=n-1;i>=0;i--){
		while(!s.empty() && s.top()<=arr[i]){
			s.pop();
		}
		if(i<n){
		if(s.empty()==false){
			ans[i]=s.top();
		}
		else{
			ans[i]=-1;
		}
	}
	s.push(arr[i]);
	}
	return ans;
}
