import math
import os
import random
import re
import sys
import collections
import itertools

input = sys.stdin.readline
from math import ceil
from itertools import compress


def sieve(limit):
    if limit < 2:
        return []

    limit += 1  
    primes = [True] * limit
    for base in range(2, int(limit**0.5 + 1)):
        if primes[base]:
            primes[base*2:limit:base] = [False]*(ceil(limit / base) - 2)

    primes[0] = primes[1] = False
    return compress(range(limit), primes)

def isPrime(n):
    
    if n == 1: return False

    i = 2
    
    while i*i <= n:
        
        if n % i == 0:
            return False
        
        i += 1
    
    return True


if __name__ == '__main__': 
    limit = int(input())
    vals = sieve(limit)
    ans=[]
    for i in vals:
        ans.append(i)

    print(ans)

    print(isPrime(123))