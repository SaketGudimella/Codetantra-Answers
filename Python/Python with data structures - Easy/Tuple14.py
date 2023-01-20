a = input("data: ")
data = tuple(int(item) for item in a.split(","))
print("max:",max(data))
