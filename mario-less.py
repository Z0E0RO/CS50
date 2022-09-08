import cs50 as c

height = 0
while height>8 or height<1:
    height = c.get_int("Height: ")
for i in range(height):
    for k in range(height-i,1,-1):
        print(" ", end='')
    for j in range(i+1):
        print("#", end='')
    print()