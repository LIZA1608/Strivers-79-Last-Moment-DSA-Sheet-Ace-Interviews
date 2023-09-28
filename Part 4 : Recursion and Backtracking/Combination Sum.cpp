//Time Complexity: O(2^t * k) where t is the target, k is the average length
//Space Complexity: O(k*x), k is the average length and x is the no. of combinations
void find(int ind,int t,vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
    if(ind==arr.size()){
        if(t==0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=t){
        ds.push_back(arr[ind]);
        find(ind,t-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    find(ind+1,t,arr,ans,ds);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
     //   sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>ans;
        vector<int>ds;
        find(0,t,arr,ans,ds);
        return ans;
    }
