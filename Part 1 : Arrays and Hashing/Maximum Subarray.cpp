/* kadane's algo   T.C->O(N) ,S.C->O(1)*/
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curr=curr+nums[i];
             maxi=max(maxi,curr);
            if(curr<0) curr=0;
           
        }
        return maxi;
    }
