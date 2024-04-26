def main():
    greeting = input("Provide a greeting: ").lstrip().lower()
    print(compensation(greeting))

def compensation(answer):
    if answer.startswith("hello"):
        return "$0"
    elif answer.startswith("h"):
        return "$20"
    else:
        return "$100"

main()
