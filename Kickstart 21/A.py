import math
import os
import random
import re
import sys
import collections
from sys import stdin

r = stdin


def solve():
    l = int(r.readline())
    nums = (list(map(int,r.readline().split())))
    ans=0
    arr = sorted(nums)
    cur = 0
    
    for i in range(l-2):
        find=[-1, 200]
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

    
    



if __name__ == '__main__': 
    q = int(r.readline())
    for i in range(q):

        ans = solve()
        print("Case #%d: %d" % (i+1, ans))



    

