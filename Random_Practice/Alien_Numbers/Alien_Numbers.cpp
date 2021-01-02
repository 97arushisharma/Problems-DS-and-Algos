#include <bits/stdc++.h>
#include <boost/algorithm/string.hpp>
#include <iostream>
using namespace std;

int main() {
	
 	int n;
 	cin>>n;
    int x = 1;
 	while(n){
	    string s;
	    vector<string> result;
        for(int i=0;i<3;i++){
            cin>>s;
            result.push_back(s);
        }
        map<char, int> s_lang_map;
        map<int, char> t_lang_map;
        for(int i=0; i < result[1].size(); i++){
            s_lang_map.insert(pair<char,int>(result[1][i],i));
            //cout<<result[1][i]<<" : "<<i<<"\n";
        }
        for(int i=0; i < result[2].size(); i++){
            t_lang_map.insert(pair<int,char>(i,result[2][i]));
            //cout<<result[2][i]<<" : "<<i<<"\n";
        }
        string final;
        //converting to decimal
        if(result[1].size() == result[2].size()){
            for(int i=0; i < result[0].size(); i++){
                final.push_back(t_lang_map[s_lang_map[result[0][i]]]);
            }
        }
        else{
            int s = result[2].size();
            int l = result[0].size();
            //int val = stoi(result[0]);
            int res = 0;
            for(int i=0; i < result[0].size(); i++){
                res+= (s_lang_map[result[0][i]] * pow(result[1].size(), --l));
            }
           
            int rem = 0;
            while(res!=0){
                rem = res%s;
                res = res/s;
                final.push_back(t_lang_map[rem]);
            }
            reverse(final.begin(),final.end());
        }
        
        cout<<"Case #"<<x<<": "<<final<<"\n";
        x++;
 	    n--;
 	}
	return 0;
}
