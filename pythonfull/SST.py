t=int(input())
for i in range(0,t):
    x,y=map(int,input().split())
    x=x*10
    y=y*5
    if(x==y):
        print("ANY")
    elif(x<y):
        print("SECOND")
    else:
        print("FIRST")