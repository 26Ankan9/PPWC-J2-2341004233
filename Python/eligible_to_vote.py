def eligible_to_vote(age):
    if age >= 18:
        return "You are eligible to vote."
    else:
        return "You are not eligible to vote yet."

age = int(input("Enter your age: "))

result = eligible_to_vote(age)
print(result)
