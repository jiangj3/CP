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

#recursive
def GCD(a,  b):
    if a==0:
        return b

    return GCD(b%a,a)


def euclidian(a, b):
    while b:
        a = a%b
        a, b = b, a
    return a


if __name__ == '__main__': 
    g = GCD(512,96)
    r = euclidian(17,17)
    print(g, r)


