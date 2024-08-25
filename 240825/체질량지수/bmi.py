a = input()

a = a.split()

h = int(a[0])
w = int(a[1])

b = 10000*w//(h*h)
print(b)
if b >=25:
    print("Obesity")