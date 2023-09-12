//binary search->TC->O(logN)
  int findPeakElement(vector<int>& nums) {
     int n=nums.size();
    if(n==1) return 0;
    if(nums[0]>nums[1]) return 0;
    if(nums[n-1]>nums[n-2]) return (n-1);
    int s=1;
    int e=n-2;
    while(s<=e){
        int m=(s+e)/2;
        if((nums[m]>nums[m-1])&&(nums[m]>nums[m+1])){
        return m;
        }
        else if(nums[m]>nums[m-1]){
            s=m+1;
        }
        else e=m-1;
    }
    return -1;
     }   
    
// brute force T.C->O(N)
int findPeakElement(vector<int>& nums) {
     int n=nums.size();
    for(int i=0;i<n;i++){
        if((i==0 || nums[i-1]<nums[i]) &&((i==n-1)||nums[i]>nums[i+1])){
            return i;
        }
    }
    return -1;
     }   
