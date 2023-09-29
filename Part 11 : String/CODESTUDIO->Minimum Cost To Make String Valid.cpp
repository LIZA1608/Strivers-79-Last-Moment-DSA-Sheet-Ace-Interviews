//TC->O(N) S.C->O(1)
#include <bits/stdc++.h>
int findMinimumCost(string s) {
  if(s.length()%2!=0){
    return -1;
  }
  int open=0;
  int close=0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '}'){
      if(open!=0){
        open--;
      }
      else close++;
    }
    if(s[i]=='{'){
      open++;
    }
  }
  int ans=(open+1)/2+(1+close)/2;
  return ans;
}
