import math
# yay alpha trimmed mean calculator :)

def alpha_trimmed(filename, alpha):
    """this function returns
    alpha trimmed result"""
    numbers = []
    with open(filename, 'rb') as file:
        for line in file:
            print(type(line))
            numbers = line.decode().split(" ")
            #print(type(numbers))
            #print(numbers)
    numbers.sort()
    print(numbers)
    n = len(numbers)
    ElemsToTrim = n * alpha
    ElemsToTrim = int(ElemsToTrim)
    for x in range(ElemsToTrim):
        # del smallest elems
        del numbers[0]
        # del largest elems
        del numbers[-1]
    print((sum(map(float, numbers))/len(numbers)))
    print(numbers)
    print("")

#alpha_trimmed("numz.txt", 0.1)
