a = int(input())
for i in range(a):
    n = int(input())
    list1=[]
    for i in range(0,n):
        d=int(input())
        list1.append(d)
    maximum = max(list1)
    minimum = min(list1)
    print(abs(maximum-minimum))