/*Time Complexity: O(N) or O(N*logN) depending on which map data structure we are using, where N = size of the array.*/
#include<bits/stdc++.h>
int subarraysWithSumK(vector<int> a, int b) {
  // Write your code here
  int n = a.size();
  int xr = 0;
  map<int, int> mp;
  int cnt=0;
  mp[xr]++;
for(int i=0;i<n;i++){
    xr=xr^a[i];
    int x=xr^b;
      cnt+=mp[x];
      mp[xr]++;
}
return cnt;
}


/*TC->O(N^2),S.C->O(1)*/
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n=a.size();
    int c=0;
    for(int i=0;i<n;i++){
            int xorr=0;
        for(int j=i;j<n;j++){
            xorr=xorr^a[j];
            if(xorr==b) c++;
        }
    }
    return c;
}
/* brute force TC->O(N^3)*/
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int n=a.size();
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xorr=0;
            for(int k=i;k<=j;k++){
                xorr=xorr^a[k];
            }
            if(xorr==b) c++;
        }
    }
    return c;
}
