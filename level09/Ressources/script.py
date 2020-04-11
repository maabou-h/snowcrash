from sys import argv

if __name__ == "__main__":
    for idx, char in enumerate(argv[1]):
    print(chr(ord(char) - idx)),
