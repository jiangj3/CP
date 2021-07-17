import math
import os
import random
import re
import sys
import collections
from sys import stdin

r = stdin


def solve():
    x = int(r.readline())
    n = x ** (1/3)
    
    for i in range(1,int(n)):
        a = x - (i**3)
        if((a ** (1/3)) == int(a ** (1/3))):
            return "YES"
    return "NO"

    





if __name__ == '__main__': 
    q = int(r.readline())
    for _ in range(q):
        print(solve())




    

