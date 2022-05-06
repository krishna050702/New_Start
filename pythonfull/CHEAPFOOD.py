t=int(input())
for i in range(0,t):
    x=int(input())
    if(x<=1000):
        print('100')
    else:
        print(int(x*0.1),end="\n")
