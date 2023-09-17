//
//using prioirtyqueue T.C->O(NLOGN)+O(KLOGN)  , SC->O(N-1)
#include<bits/stdc++.h>
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	
	int n=arr.size();
	vector<int> howmany(n-1,0);
	priority_queue<pair<long double,int>>pq;
	for(int i=0;i<n-1;i++){
		pq.push({arr[i+1]-arr[i],i});
	}
	for(int gasStation=1;gasStation<=k;gasStation++){
               auto tp=pq.top();
			   pq.pop();
			   int secInd=tp.second;
			   howmany[secInd]++;
	   long double inidiff=arr[secInd+1]-arr[secInd];
	   long double newdiff=inidiff/(long double)(howmany[secInd]+1);
	   pq.push({newdiff,secInd});
	}
	return pq.top().first;
}
//brute force t.c->o(n^2)
double minimiseMaxDistance(vector<int> &arr, int k){
	// Write your code here.	
	int n=arr.size();
	vector<int> howmany(n-1,0);
	for(int gassttion=1;gassttion<=k;gassttion++){
		long double maxSection=-1;
		int maxInd=-1;
		for(int i=0;i<n-1;i++){
			long double diff=arr[i+1]-arr[i];
			long double seclen=diff/(long double) (howmany[i]+1);
			if(seclen>maxSection){
				maxSection=seclen;
				maxInd=i;
			}
		}
		howmany[maxInd]++;
	}
	long double maxAns=-1;
	for(int i=0;i<n-1;i++){
		long double diff=(arr[i+1]-arr[i]);
		long double sec=diff/(long double)(howmany[i]+1);
		maxAns=max(maxAns,sec);
	}
	return maxAns;
}
