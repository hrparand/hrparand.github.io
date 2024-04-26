def main():
    print(convert(input("Write a text containing emoticons: ")))

def convert(text):
    text = text.replace(":)", "🙂")
    text = text.replace(":(", "🙁")
    return text

main()
