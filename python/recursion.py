
def digitOfNumber(n):
    #assert n >= 0 and n <= 500 , "Because Number must be in posite integer"
    if n == 0:
        return 0
    else:
        return int(n%10) + int(digitOfNumber(n/10))

p = input("Enter Numbers: ")
print(digitOfNumber(p))
def powerOfTwo(n):
    if n == 0:
         return 1
    else:
        power = powerOfTwo(n-1)
        return power * 2

print(powerOfTwo(3))

def powerOfTwoIt(n):
    i = 0
    power = 1
    while i < n:
        power = power * 2
        i = i + 1
    return power


print(powerOfTwoIt(4))

 ## Factorial###


def factorial(n):
    assert n >= 0 and int(n) == n, 'The number must be positive integer only!'
    if n in [0,1]:
        return 1
    else:
        return n * factorial(n-1)


 ## Fibonacci###

def fibonacci(n):
    assert n >=0 and int(n) == n , 'Fibonacci number cannot be negative number or non integer.'
    if n in [0,1]:
        return n
    else:
        return fibonacci(n-1) + fibonacci(n-2)

print(fibonacci(7))