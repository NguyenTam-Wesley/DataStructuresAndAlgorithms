#Bubble Sort

L = [9, 8, 7, 6, 5, 4, 3]
n = len(L)
for i in range(0,n-1):
    for j in range(0, n - i - 1):
        if L[j] > L[j + 1]:
            temp = L[j]
            L[j] = L[j + 1]
            L[j + 1] = temp
print(L)