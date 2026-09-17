def bubble_sort(arr):
    a = arr.copy()
    n = len(a)
    for i in range(n):
        for j in range(0, n - i - 1):
            if a[j] > a[j + 1]:
                temp = a[j]
                a[j] = a[j + 1]
                a[j + 1] = temp
    return a

def selection_sort(arr):
    a = arr.copy()
    n = len(a)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if a[j] < a[min_idx]:
                min_idx = j
        temp = a[i]
        a[i] = a[min_idx]
        a[min_idx] = temp
    return a

def insertion_sort(arr):
    a = arr.copy()
    n = len(a)
    for i in range(1, n):
        key = a[i]
        j = i - 1
        while j >= 0 and a[j] > key:
            a[j + 1] = a[j]
            j -= 1
        a[j + 1] = key
    return a

N = int(input("Enter number of products: "))

if N <= 0:
    print("Number of products must be greater than 0.")
else:
    prices = []
    for i in range(N):
        price = float(input(f"Enter price for product {i + 1}: "))
        prices.append(price)

    bubble_sorted = bubble_sort(prices)
    selection_sorted = selection_sort(prices)
    insertion_sorted = insertion_sort(prices)

    print("\nOriginal Prices:", prices)
    print("Sorted using Bubble Sort:", bubble_sorted)
    print("Sorted using Selection Sort:", selection_sorted)
    print("Sorted using Insertion Sort:", insertion_sorted)
