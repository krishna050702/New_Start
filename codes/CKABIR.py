test = int(input())
for i in range(test):
    Array = int(input())
    String = input()
    set1 = set(String)
    lis = list(set1)
    lis.sort()
    maxcount = []
    dic = {}
    for k in lis:
        dic[k]=String.count(k)
        maxcount.append(String.count(k))
    for k in dic:
        if dic[k]==max(maxcount):
            print(max(maxcount),k)
            break