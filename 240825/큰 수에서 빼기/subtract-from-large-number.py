a = input()

a = a.split()

a,b = int(a[0]),int(a[1])

if a>b:
    print(a-b)
if a<=b:
    print(b-a)