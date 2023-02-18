#  taking three input at a time
# x, y, z = [int(x) for x in input("Enter three value: ").split()]
# print("First Number is: ", x)
# print("Second Number is: ", y)
# print("Third Number is: ", z)
# print()


x, y, z = [int(x) for x in input().split()]
print(f"Sum of {x}, {y} and {z} is {x+y+z}")