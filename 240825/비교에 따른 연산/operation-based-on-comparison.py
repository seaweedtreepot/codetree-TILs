a = input()
a = a.split()

b = int(a[1])
a = int(a[0])

if a>b:
    print(a*b)
else:
    print(b//a)