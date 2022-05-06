t=int(input())
for i in range(0,t):
    x,y=map(int,input().split())
    if 3*x > 2*y:
        print(2*y,end="\n")
    else:
        print(3*x,end="\n")
