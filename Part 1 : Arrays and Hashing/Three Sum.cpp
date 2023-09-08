/*Two pointer approch */
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
