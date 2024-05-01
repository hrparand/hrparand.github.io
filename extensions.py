def main():
    print(media_type(input("Enter a file name with extension: ")))

#define a dictionary of extensions and their coresponding media type.(https://www.codecademy.com/learn/dscp-python-fundamentals/modules/dscp-python-dictionaries/cheatsheet)
def media_type(file):
    media_types = {
        ".gif" : "image/gif",
        ".jpg" : "image/jpeg",
        ".jpeg" : "image/jpeg",
        ".png" : "image/png",
        ".pdf" : "application/pdf",
        ".txt" : "text/plain",
        ".zip" : "application/zip"
    }
    file = file.strip()
    
    for suffix in media_types:
        if file.lower().endswith(suffix):
            return media_types[suffix]
    return "application/octet-stream"
main()
