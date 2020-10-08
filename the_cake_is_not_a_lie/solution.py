def solution(s):
    # Your code here
    # Test the negative cases. You never know...
    if len(s) == 0:
        return -1
    if len(s) > 200:
        return -1
    
    # Initialization
    count = 1
    mm = []
    list1 = []
    list1[:0] = s
    mm.append(list1[0])
    i = 1
    
    while i<len(list1):
        l = list1[i]
        
        # Just to make sure we dont have any other characters
        # Dont trust the input data
        if((l<'a' or l> 'z')):
            return 0
        
        # If the first character of the M&M matches the current
        # Take next n = len(mm) characters and compare
        if mm[0] == l:
            tmp = list1[i:i+len(mm)]
            
            if mm == tmp:
                count = count + 1
                i = i+len(tmp)
            else:
                mm = list1[0:i+1]
                count = 1
                i = i+1
        # Else ignore the character and include the entire
        # sequence before the current character in M&M
        else:
            mm = list1[0:i+1]
            count = 1
            i = i+1
    
    return count 
