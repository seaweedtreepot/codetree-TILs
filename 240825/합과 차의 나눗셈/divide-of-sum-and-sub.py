a = input()

a = a.split()

b = int(a[1])
a = int(a[0])

a,b = a+b, (a-b)

print(f"{a/b:.2f}")