/*BOYER MOYER SOLUTION  T.C->0(N) S.C->O(1)*/
vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int cnt1=0,cnt2=0;
        int ele1,ele2;
        for(int i=0;i<n;i++){
            if(cnt1==0 && nums[i]!=ele2){
                cnt1=1;
                ele1=nums[i];
            }
            else if(cnt2==0 && nums[i]!=ele1){
                cnt2=1;
                ele2=nums[i];
            }
            else if(ele1==nums[i]) cnt1++;
            else if(ele2==nums[i]) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        int c=0,o=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1){
                c++;
            }
            if(nums[i]==ele2){
                o++;
            }
        }
        if(c>(n/3)){
            ans.push_back(ele1);
        }
        if(o>(n/3)){
            ans.push_back(ele2);
        }
return ans;
    }
/*hashing  T.C->O(N)LOGN , S.C->O(N)*/
  vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
      map<int,int>mp;
      int mini=(n/3)+1;
      for(int i=0;i<n;i++){
          mp[nums[i]]++;
          if(mp[nums[i]]==mini){
              ans.push_back(nums[i]);
          }
          if(ans.size()==2) break;
      }
      sort(ans.begin(),ans.end());
      return ans;
    }
/* brute force T.C->O(N^2)  S.C-> O(1)*/
  vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(ans.size()==0 || ans[0]!=nums[i]){
            int c=0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                    c++;
                }
            }
                if(c>(n/3)){
                    ans.push_back(nums[i]);
                }
          
            }
                  if(ans.size()==2) break;
        }
        return ans;
    }
