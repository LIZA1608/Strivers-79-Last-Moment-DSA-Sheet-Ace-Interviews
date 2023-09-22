  vector<int> nextGreaterElements(vector<int>& nums) {
          int n=nums.size();
        vector<int>ans(n);
        stack<int>s;
        for(int i=2*n-1;i>=0;i--){
         while(!s.empty() && s.top()<=nums[i%n]){
          s.pop(); 
         }
         
         if(i<n){
           if(s.empty()==false){
             ans[i%n]=s.top();
           }
           else{
             ans[i%n]=-1;
           }
         }
         s.push(nums[i%n]);
        }
        return ans;
    }
