# Importing cs50 library
import cs50 as c
# Getting input from the user
height = 0
while height > 8 or height < 1:
    height = c.get_int("Height: ")
# Using for loop to make the pattern
for i in range(height):
    for k in range(height-i, 1, -1):
        print(" ", end='')
    for j in range(i+1):
        print("#", end='')
    print("  ", end='')
    for l in range(i+1):
        print("#", end='')
    print()