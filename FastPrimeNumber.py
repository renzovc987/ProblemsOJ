import math  
def primo(n):
    c=0;
    for i in range(2,int(math.sqrt(n))+1):
        if(n%i==0):
            c=c+1
    if(c>0):
        return False
    else:
        return True
    
tc=int(input())
for i in range(tc):
    num=int(input())
    if(primo(num)):
        print("Prime")
    else:
        print("Not Prime")
        