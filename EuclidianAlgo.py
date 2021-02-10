import math
import os
import random
import re
import sys
import collections
import itertools

input = sys.stdin.readline


#O(Log min(a, b)) 

#To find the number of positive integers, not greater than n, and relatively prime with n, use Euler’s totient function
def GCD(a,  b):
    if a==0:
        return b

    return GCD(b%a,a)






if __name__ == '__main__': 
    g = GCD(512,96)
    print(g)


