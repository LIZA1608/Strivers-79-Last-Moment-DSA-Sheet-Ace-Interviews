 bool canweplease(vector<int>arr,int mid,int k){
        int n=arr.size();
        int c=1;
        int last=arr[0];
        for(int i=1;i<=n-1;i++){
            if(arr[i]-last>=mid){
                c++;
                last=arr[i];
            }
        }
        if(c>=k) return true;
        return false;
    } 

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int l=1;
        int ans=0;
        int end=stalls[n-1]-stalls[0];
        while(l<=end){
            int m=(l+end)/2;
            if(canweplease(stalls,m,k)){
                ans=m;
                l=m+1;
            }
            else end=m-1;
        }
        return end;
    }
