
lista = []

n = input("Enter the list limit: ")
n = int(n)
print("Enter the list elements: \n")


def input_fun():
    for i in range(n):
        element = int(input())
        lista.append(element)
    print(lista)


def linear_search(list1, key):
    key = int(input("Enter the key element for search: "))
    i = 0
    flag = False
    while i < len(list1) and not flag:
        if list1[i] == key:
            flag = True
            print("The key element is found at" + str(list[i] + " Location"))
        else:
            i = i + 1
    return flag


input_fun()

linear_search(lista, key)
