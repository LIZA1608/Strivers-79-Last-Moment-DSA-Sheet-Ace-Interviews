//using mergesort Time Complexity: O( N * log ( N ) ),Space Complexity: O( N )
int merge(vector<int>&a,int low,int mid,int high){
    int cnt=0;
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid &&right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
    return cnt;
}
int  mergesort(vector<int>&a,int l,int r){
    int count=0;
    if(l>=r)return count;
    int m=(l+r)/2;
    count+=mergesort(a,l,m);
    count+=mergesort(a,m+1,r);
    count+=merge(a,l,m,r);
    return count;
}
int numberOfInversions(vector<int>&a, int n) {
    int count=mergesort(a,0,n-1);
    return count;
}
//brute force TC->O(N^2)
int numberOfInversions(vector<int>&a, int n) {
    int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    count++;
                }
            }
        }
        return count;
}
