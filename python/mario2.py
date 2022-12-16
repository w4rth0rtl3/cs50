height = int(input("Height: "))
blank = height

for i in range(1, height + 1):
    blank -= 1
    print(" " * blank + "" + "#" * i + " " + "#" * i)
    