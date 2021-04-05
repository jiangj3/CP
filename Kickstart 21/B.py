import math
import os
import random
import re
import sys
import collections
from sys import stdin

r = stdin


def solve():
    vals = (list(r.readline().split()))
    x = int(vals[0])
    y = int(vals[1])
    s = str(vals[2])
    ans=0

    #if you have multiple spaces, find next character and determine whether u want CJ or JC bc there must contain one
    #otherwise, just greedily select

    if s=="?"* len(s): return 0
    word=""
    i=0
    while (i < len(s)):
        if i==0 and s[i]=="?":
            for j in range(len(s)):
                if s[j]!="?":
                    start = s[j]
                    idx=j
                    break
            word = start*(idx) 
            i=idx

        else:
            if s[i]!="?":
                word+=s[i]
                i+=1
            else:
                char = s[i-1]
                while(i< len(s)):
                    if s[i]=="?":
                        word+= char
                        i+=1
                    else:
                        break
                
            
    for i in range(len(word)-1):
        if word[i]=="C" and word[i+1]=="J":
            ans+=x
        if word[i] =="J" and word[i+1]=="C":
            ans+=y

    #print(word)
    return ans








    
    
    

    
    



if __name__ == '__main__': 
    q = int(r.readline())
    for i in range(q):

        ans = solve()
        print("Case #%d: %d" % (i+1, ans))
    



    

