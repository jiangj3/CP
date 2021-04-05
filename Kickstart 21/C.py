import math
import os
import random
import re
import sys
import collections
from sys import stdin
import itertools

r = stdin

def reverse(arr):
    l = len(arr)
    nums = arr
    ans=0
    arr = sorted(nums)
    cur = 0
    
    for i in range(l-2):
        find=[-1, 1000]
        for j in range(i,l):
            if nums[j] < find[1]:
                find[0]=j
                find[1]=nums[j]
        
        min_idx=find[0]
        #print(min_idx)
        ans += abs(min_idx - i )+1
        
        nums = nums[:i] + (nums[i:min_idx+1])[::-1] +nums[min_idx+1:]
        cur = i+1
        #print(nums, ans)
           


    max_idx = nums.index(arr[cur])
    ans += abs(max_idx - cur )+1
    nums = nums[:cur] + (nums[cur:max_idx+1])[::-1] +nums[max_idx+1:]
    #print(nums)
    return ans



def solve():
    
    nums = (list(map(int,r.readline().split())))
    N = nums[0]
    C = nums[1]
    a = [x for x in range(1,N+1)]
    
    for i in (list(itertools.permutations(a))):
        if reverse(i[:])==C:
            return i




    return 0
    



if __name__ == '__main__': 
    q = int(r.readline())
    for i in range(q):

        ans = solve()
        if ans ==0:
            print("Case #%d: %s" % (i+1, "IMPOSSIBLE"))
        else:
            print("Case #%d: " % (i+1), end=" ")
            for j in ans:
                print(j, end=" ")
            print("")
                 




    

