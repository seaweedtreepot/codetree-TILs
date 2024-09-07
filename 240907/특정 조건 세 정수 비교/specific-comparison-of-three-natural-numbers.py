a = input()

a = a.split()

a,b,c = int(a[0]),int(a[1]),int(a[2])

if a<b and a<c:
    print(1,end=" ")
else :
    print(0,end=" ")

if a == b and a==c:
    print(1)
else:
    print(0)