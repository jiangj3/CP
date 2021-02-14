
import math
import os
import random
import re
import sys
import collections
import itertools

input = sys.stdin.readline
sys.setrecursionlimit(4000)

#O(log(b)) 



#recursive
def binPower(a, b):
    if b==0: return 1
    half = binPower(a, b//2)
    val = half * half
    if b%2==1: return val * a
    return val




def iterBinPower(a, b):
    ans =1
    while b>0:
        if b%2==1:
            ans = ans * a
        a = a*a
        b//=2
    return ans



    


if __name__ == '__main__': 
    g = binPower(2,81254)
    r = iterBinPower(17,3999)
    print(g, r)


