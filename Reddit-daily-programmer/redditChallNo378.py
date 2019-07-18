
# [2019-05-20] Challenge #378 [Easy] The Havel-Hakimi algorithm for graph realization

# https://stackoverflow.com/questions/2793324/is-there-a-simple-way-to-delete-a-list-element-by-value
def removezeros(numbers):
    """removes zeros from
    the list inserted via params"""
    while numbers.count(0) > 0:
        numbers.remove(0)
    return numbers

def sortDescending(numbers):
    """the name says it all"""
    numbers.sort(reverse=True)
    return numbers

def lengthCheck(value, numbers):
    """a"""
    if value > len(numbers):
        return False
    if value <= len(numbers):
        return True

def frontElimination(value, numbers):
    if value <= len(numbers):
        for x in range(value):
            numbers[x] -= 1
    return numbers


# alright lets go :)
def havelHakimi(sequence):
    flag = 0
    a = removezeros(sequence)
    if len(a) == 0:
        return True
    b = sortDescending(a)
    # remove firs elem
    first = b.pop(0)
    if lengthCheck(first, b) == False:
        return False
    c = frontElimination(first, b)
    if len(c) > 0:
        return havelHakimi(c)

test = havelHakimi([5, 3, 0, 2, 6, 2, 0, 7, 2, 5])

print(havelHakimi([14, 10, 17, 13, 4, 8, 6, 7, 13, 13, 17, 18, 8, 17, 2, 14, 6, 4, 7, 12]))
print(havelHakimi([6, 0, 10, 10, 10, 5, 8, 3, 0, 14, 16, 2, 13, 1, 2, 13, 6, 15, 5, 1]))
print(havelHakimi([5, 3, 0, 2, 6, 2, 0, 7, 2, 5]))