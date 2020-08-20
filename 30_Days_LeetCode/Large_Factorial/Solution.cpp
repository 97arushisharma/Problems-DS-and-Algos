# Multiply function to multiply vector with a number
vector<int> multiply(vector<int> res, int x){
    int carry = 0;
    vector<int> result;
    for (int ptr = 0; ptr < res.size(); ptr++){
        int val = res[ptr];
        val = (val * x) + carry;
        carry = val/10;
        result.push_back(val%10);
    }
    while (carry) 
    { 
        result.push_back(carry%10); 
        carry = carry/10; 
    } 
    return result;
}


# Factorial function that uses recursion
vector<int> factorial(int x){
    if(x <= 1){
        vector<int> res = {1};
        //cout<<res.size()<<"<-";
        return res;
    }
    return multiply(factorial(x-1),x);
}

# Driver function provided by the test compiler
string Solution::solve(int A) {
    
    vector<int> result = factorial(A);
    
    # It is an Output stream class to operate on strings.
    # Objects of this class use a string buffer that contains a sequence of characters.
    # This sequence of characters can be accessed directly as a string object, using member str.
    stringstream ss;
    for(int i = result.size()-1; i >= 0; i--)
    {
        ss << result[i];
    }
    
    string s = ss.str();
    return s;
}
