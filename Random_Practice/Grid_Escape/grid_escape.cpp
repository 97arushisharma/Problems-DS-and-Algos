#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l;
    cin>>l;
    int t=1;
    while(t <= l){
        char prev = '\0';
        int n = 1;
        int r,c,k;
        cin>>r>>c>>k;
        char arr[r][c];
        //cout<<r<<" : "<<c<<" : "<<k;
        int flag =0;
        if(k == r*c-1){
            cout<<"Case #"<<t<<": "<<"IMPOSSIBLE\n";
            t++;
            continue;
        }
        else if(k > r*c){
            cout<<"Case #"<<t<<": "<<"IMPOSSIBLE\n";
            t++;
            continue;
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(flag == 0){
                    if(prev == '\0')
                        arr[i][j] = 'N';
                    else
                        arr[i][j] = prev;
                    if(n == k)
                        flag = 1;
                    n++;
                    prev = 'W';
                }
                else{
                    if(j==c-1 && i!=r-1)
                        arr[i][j] = 'S';
                    else if(j==c-1 && i==r-1)
                        arr[i][j] = 'W';
                    else if(j!=c-1)
                        arr[i][j] = 'E';
                    
                }
            }
            if(flag == 0)
                prev = 'N';
        }
        if(flag == 1){
            cout<<"Case #"<<t<<": "<<"POSSIBLE\n";
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<"\n";
            }
        }
        t++;
    }
    return 0;
}
