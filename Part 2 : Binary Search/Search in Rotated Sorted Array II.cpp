// worst case time complexity is O(N) 
 bool Search(int n, vector<int>& a, int t) {
        // Code here
        int s=0;
        int e=n-1;
        while(s<=e){
            int m=(s+e)/2;
            if(a[m]==t) return true;
            while(s<m && a[s]==a[m]) s++;
            while(m<e && a[m]==a[e]) e--;
            if(a[s]<=a[m]){
                if(a[s]<=t && t<a[m]){
                    e=m-1;
                }
                else s=m+1;
            }
            else{
                if(a[m]<t && t<=a[e]) s=m+1;
                else e=m-1;
            }
        }
        return false;
    }
