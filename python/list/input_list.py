# Python List input using function
new_list = list()
num = input("How many elements you want ?")

for i in range(int(num)):
    n = input()
    new_list.append(int(n))
    new_list.sort()

print(f"My list : {new_list}")

