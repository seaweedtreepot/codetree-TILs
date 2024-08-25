a = input()

a = a.split()

a,b = int(a[0]),int(a[1])
a += 8
b *= 3
print(f"{a}\n{b}\n{a*b}")