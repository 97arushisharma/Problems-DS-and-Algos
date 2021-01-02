def solution(l):
    # Your code here
    l.sort(reverse=True)
    s = sum(l)
    s = s%3
    flag = False
    x = len(l)
    if s == 1:
        i = x - 1
        while i >= 0:
            if l[i]%3 == s:
                l.pop(i)
                flag = True
                break
            i = i-1
        if flag == False:
            val = 0
            vali = x - 1
            i = x - 1
            while i >= 0:
                if l[i]%3 == 2:
                    val = l.pop(i)
                    vali = i
                    if len(l) == x-2:
                        flag = True
                        break
                i = i-1
            if len(l) == x-1:
                l.insert(vali, val)
                return 0
                
    elif s == 2:
        i = x - 1
        while i >= 0:
            if l[i]%3 == s:
                l.pop(i)
                flag = True
                break
            i = i-1
        if flag == False:
            val = 0
            vali = x - 1
            i = x - 1
            while i >= 0:
                if l[i]%3 == 1:
                    val = l.pop(i)
                    vali = i
                    if len(l) == x-2:
                        flag = True
                        break
                i = i-1
            if len(l) == x-1:
                l.insert(vali, val)
                return 0
                
    if len(l) == 0:
        return 0
    
    num = 0
    i = 0
    while i< len(l):
        num = (num * 10) + l[i]
        i = i+1
    
    return num
