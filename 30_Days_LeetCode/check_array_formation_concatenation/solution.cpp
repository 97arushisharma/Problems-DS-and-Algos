class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        //vector<int> res(arr.size());
        vector<vector<int>>::iterator it ;
        vector<int>::iterator it1 = arr.begin();
        while(it1 != arr.end()){
            bool flag = false;
            for(it = pieces.begin(); it != pieces.end(); it++){
                
                if((*it)[0] == *it1){
                    flag = true;
                    it1++;
                    int s = (*it).size();
                    int i=1;
                    while(i < s){
                        if((*it)[i] == *it1)
                            it1++;
                        else 
                            return false;
                        i++;
                    }
                    pieces.erase(it);
                    break;
                }
            }
            if(flag == false)
                return false;
        }
        return true;
        
    }
};
