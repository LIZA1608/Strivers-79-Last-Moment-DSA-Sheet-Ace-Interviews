//binary search T.C->O(NLOGN)
int maxi(vector<int>v){
    int n=v.size();
    int maxii=INT_MIN;
    for(int i=0;i<n;i++){
        maxii=max(maxii,v[i]);
    }
    return maxii;
}
long long int time(vector<int>v,int h){
    int n=v.size();
   long long int sum=0;
    for(int i=0;i<n;i++){
        sum +=ceil((double)v[i]/(double)h);
    }
    return sum;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    int n=maxi(v);
        int s=1;
        int e=n;
        while(s<=e){
            int m=(s+e)/2;
       long long int req=time(v,m);
        if(req<=h){
            e=m-1;
        }
        else s=m+1;
    }
    return s;
}
//brute force T.C->O(N^2)
#include<bits/stdc++.h>
int maxi(vector<int>v){
    int n=v.size();
    int maxii=INT_MIN;
    for(int i=0;i<n;i++){
        maxii=max(maxii,v[i]);
    }
    return maxii;
}
int time(vector<int>v,int h){
    int n=v.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=ceil((double)v[i]/(double)h);
    }
    return sum;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    int n=maxi(v);
    for(int i=1;i<=n;i++){
        int req=time(v,i);
        if(req<=h){
            return i;
        }
    }
    return n;
}
