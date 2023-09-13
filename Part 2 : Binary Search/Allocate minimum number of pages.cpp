  int sum(int a[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        return sum;
    }
    int countstudent(int a[],int mid,int n){
        int stu=1;
        int page=0;
        for(int i=0;i<n;i++){
            if(page+a[i]<=mid){
                page+=a[i];
            }
            else{
                stu++;
                page=a[i];
            }
        }
        return stu;
    }
    int findPages(int a[], int n, int m) 
    {
        //code here
        if(m>n) return -1;
        int low=*max_element(a,a+n);
        int high=sum(a,n);
        while(low<=high){
            int mid=(low+high)/2;
            int count=countstudent(a,mid,n);
            if(count>m){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
