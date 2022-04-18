t=int(input())
for _ in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    ans=set()

    for i in range(1,n):
        if(arr[i]!=arr[i-1]):
            ans.add(i)
            ans.add(i-1)

    print(len(ans))