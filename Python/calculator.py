def calculator(num1, num2, operator):
    operations = {
        '+': num1 + num2,
        '-': num1 - num2,
        '*': num1 * num2,
        '/': num1 / num2 if num2 != 0 else "Error: Division by zero"
    }
    return operations.get(operator, "Invalid operator.")
    
num1 = int(input("enter a number: "))
num2 = int(input("enter another number: "))
operator = input("For ADD(+), SUBTRACT(-), DIVISION(/), MULTIPLICATION(*): ")
result = calculator(num1, num2, operator)
print(result)
    