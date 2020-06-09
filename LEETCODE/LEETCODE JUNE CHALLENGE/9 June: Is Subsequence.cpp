m = len(str1) 
    n = len(str2) 
      
    j = 0    # Index of s
    i = 0    # Index of t  
      
    while j<m and i<n: 
        if str1[j] == str2[i]:     
            j = j+1    
        i = i + 1
return j==m 
