#   #  
#   #  
#####
#   #
#   #    

# Function to print the given pattern
def print_pattern():
    rows = 5
    cols = 5
    for i in range(rows):
        for j in range(cols):
            if (i == 0 or i == 1 or i == 3 or i == 4) and (j == 0 or j == 4):
                print("#", end="")
            elif i == 2:
                print("#", end="")
            else:
                print(" ", end="")
        print()
print_pattern()
