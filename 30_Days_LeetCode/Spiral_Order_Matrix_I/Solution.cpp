vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> result;
    int m = A.size();
    if(m==0)
        return result;
    int n = A[0].size();
    int i=0;
    int j=0;
    int d=0;
    int r=n-1;
    int t=0;
    int l=0;
    int b=m-1;
    //cout<<n<<" "<<m;
    while(t<=b && l<=r){
        while(j<=r && j>=l && i>=0){
           result.push_back(A[i][j]);
           if(d == 0)
                j++;
            else
                j--;
        }
        if(d == 0){
            j--;
            i++;
            t++;
        }
        else{
            j++;
            i--;
            b--;
        }
        
        while(i<=b && i>=t && j>=0){
           result.push_back(A[i][j]);
           if(d == 0)
                i++;
            else
                i--;
        }
        d = abs(d-1);
        if(d == 0){
             i++;
             j++;
             l++;
             
        }
        else{
            i--;
            j--;
            r--;
            
        }
            
        
        
    }
    
    return result;
}
