N = int(input("Enter number of products: "))

if N <= 0:
    print("Number of products must be greater than 0.")
else:
    prices = []
    for i in range(N):
        price = float(input(f"Enter price for product {i + 1}: "))
        prices.append(price)

    prices.sort()

    print("\nPrices in ascending order:")
    for price in prices:
        print(price)
