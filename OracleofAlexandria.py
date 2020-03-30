
def factorial(n):
    if(n==0 or n==1):
        return 1
    else:
        return n*factorial(n-1)
def factorial2(n,tama):
    res=n
    for i in range(tama*tama*tama):
        factor=(n-(tama*(i+1)))
        if(factor>0):
            res=res*factor
        else:
            break
    return res

tc=int(input())
s=""
for i in range(0,tc):
    c=0
    cadena=input()
    for j in cadena:
        if(j=='!'):
            break
        else:
            s=s+j
            c=c+1
    number=int(s)
    tam=len(cadena)-c
    if(tam==1):
        res=factorial(number)
    else:
        res=factorial2(number,tam)
    print(res)
    s=""
        
    
    
