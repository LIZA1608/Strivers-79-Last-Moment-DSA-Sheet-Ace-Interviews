//TC->O(N) S.C->O(1)
int minAddToMakeValid(string s) {
        int close=0;
        int open=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(open!=0){
                    open--;
            }
            else{
            close++;
            }
            }
            if(s[i]=='('){
                open++;
            }
        }
        return open+close;
    }
