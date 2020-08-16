import math as M
def leastFlagStones(m,n,a):
    print( M.ceil(float(n)/a)*M.ceil(float(m)/a))
    return;

n=int(input())
m=int(input())
a=int(input())
if n>=1 and n<=pow(10,9) and m>=1 and m<=pow(10,9) and a>=1 and a<=pow(10,9):
    leastFlagStones(m,n,a)
