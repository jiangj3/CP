import math
import os
import random
import re
import sys
import collections
from sys import stdin

r = stdin


def solve():
    players = [0] * 100
    for i in range(100):
        answers = str(r.readline())
        p = answers.count("1") / len(answers)
        players[i] = p
    

    return players.index(max(players))+1

    
    






    
    
    

    
    



if __name__ == '__main__': 
    q = int(r.readline())
    p = int(r.readline())
    for i in range(q):

        ans = solve()
        print("Case #%d: %d" % (i+1, ans))
    



    

