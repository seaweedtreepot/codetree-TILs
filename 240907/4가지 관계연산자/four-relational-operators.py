a = input()

a = a.split()

a,b = int(a[0]),int(a[1])

print(1 if a>=b else 0)
print(1 if a>b else 0)
print(1 if b>=a else 0)
print(1 if b>a else 0)