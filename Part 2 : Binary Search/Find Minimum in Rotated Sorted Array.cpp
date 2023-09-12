   int findMin(vector<int>& a) {
        int n=a.size();
        int s=0;
        int e=n-1;
        int ans=INT_MAX;
        while(s<=e){
            int m=(s+e)/2;
            if(a[s]<=a[m]){
                ans=min(ans,a[s]);
                s=m+1;
            }
            else{
               
                ans=min(ans,a[m]);
                 e=m-1;
            }
        }
        return ans;
    }
