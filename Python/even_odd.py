def even_odd(number):
    if number % 2 == 0:
        return f"{number} is an even number."
    else:
        return f"{number} is an odd number."

num = int(input("Enter a number: "))

result = even_odd(num)
print(result)
