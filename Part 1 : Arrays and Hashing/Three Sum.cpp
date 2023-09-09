/*Two pointer approch T.C->O(nlongn)+O(n^2)*/
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int>temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while( j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }
    return ans;
} 
/*hashing   T.c->O(N^2) ,SC->O(N)*/
#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        set<int>hashSet;
        for(int j=i+1;j<n;j++){
            int third=-(arr[i]+arr[j]);
            if(hashSet.find(third)!=hashSet.end()){
                 vector<int> temp = {arr[i], arr[j], third};
                  sort(temp.begin(),temp.end());
                  st.insert(temp);
            }
           hashSet.insert(arr[j]);
            }
        }
    
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

/* brute force  TC->O(N^3) */

#include<bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                  vector<int> temp = {arr[i], arr[j], arr[k]};
                  sort(temp.begin(),temp.end());
                  st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
