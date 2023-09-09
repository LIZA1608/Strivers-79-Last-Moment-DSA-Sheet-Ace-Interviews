
/*using hashmap  Time Complexity: O(2N), where N = the size of the given array.
Reason: We are using two loops each running for N times. So, the time complexity will be O(2N).

Space Complexity: O(N) as we are using a hash array to solve this problem.*/

vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here

    int n=a.size();
    int hash[n+1]={0};
for(int i=0;i<n;i++){
    hash[a[i]]++;
}
int repeat=-1;
int missing=-1;
for(int i=1;i<=n;i++){
    if(hash[i]==2){
        repeat=i;
    }
    else if(hash[i]==0){
        missing=i;
    }

    if(repeat!=-1 && missing!=-1){
        break;
    }
}
return {repeat,missing};
}
