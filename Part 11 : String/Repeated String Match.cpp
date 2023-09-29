//BEST SOLUTION is using RABIN KRAP  TC->O(len1 + len2) SC->O(1)
//better solution using kmp TC->O(len1 + len2) SC->O(len2)
//brute force ,Time Complexity (TC): O(NM),Space Complexity (SC): O(NM) .N = len(a),M = len(b)
  int repeatedStringMatch(string a, string b) {
         int len1=a.length();
         int len2=b.length();
         int n=len2/len1;
         int cnt=n;
         string na="";
         while(cnt--){
             na=na+a;
         }
         if(na.find(b)!=std::string::npos){
             return n;
         }
         na=na+a;
         if(na.find(b)!=std::string::npos){
             return n+1;
         }
         na=na+a;
         if(na.find(b)!=std::string::npos){
             return n+2;
         }
         return -1;
     }
