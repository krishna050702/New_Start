t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split(' ')))
    count=0

    for j in range(n-1):
        for k in range(j+1,n):
            if((l[j]+l[k])>=l[j]*l[k]):
                count=count+1;
    print(count)