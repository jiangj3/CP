import math
import os
import random
import re
import sys
import collections
from sys import stdin

r = stdin


def solve():
    inputs = list(map(int,r.readline().split()))
    n, m, num = inputs[0], inputs[1], inputs[2]

    row = num % n
    if row==0:
        row = n

    col = math.ceil(num / n)
    ans = (m * (row-1) ) + col
    return ans
    





if __name__ == '__main__': 
    q = int(r.readline())
    for _ in range(q):
        print(solve())




    

