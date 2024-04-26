def main():
    answer = input("What is the Answer to the Great Question of Life, the Universe, and Everything? ")
    if deep(answer) == True :
        print("Yes")
    else :
        print("No")

def deep(answer):
    return answer.lower().strip() in ["42", "forty two", "forty-two"]

main()
