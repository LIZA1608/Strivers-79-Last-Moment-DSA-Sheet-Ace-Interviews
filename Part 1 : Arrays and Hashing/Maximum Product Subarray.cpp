/* T.C->O(N) S.C->O(1) */
long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long pre=1;
	    long long suff=1;
	    long long maxi=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(pre==0) pre=1;
	        if(suff==0) suff=1;
	        pre=pre*arr[i];
	        suff=suff*arr[n-1-i];
	        maxi=max(maxi,max(pre,suff));
	    }
	    return maxi;
	}
