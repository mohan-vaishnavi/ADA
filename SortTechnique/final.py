from datetime import datetime
import random


def bubble(arr):
    n = len(arr)

    # Traverse through all array elements
    for i in range(n):

        # Last i elements are already in place
        for j in range(0, n - i - 1):

            # traverse the array from 0 to n-i-1
            # Swap if the element found is greater
            # than the next element
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr


def insertion(l):

    length = len(l)
    for i in range(1,length):
        ele = l[i]
        j = i - 1
        while j >= 0 and ele < l[j]:
            l[j + 1] = l[j]
            j -= 1
        l[j + 1] = ele
    return l


def mixed(inp):
    l = len(inp)
    # bubble sorting the two halves
    inp[0:l // 2] = bubble(inp[0:l // 2])
    inp[l // 2:l] = bubble(inp[l // 2:l])
    print(f"After bubble sorting the halves: {inp}")
    # traversal through second half sub array
    for j in range(l // 2 + 1, l, 2):
        # traversal through first half
        key1, key2 = inp[j - 1], inp[j]
        i = j - 2
        f = 0
        while i > 0 and inp[i] > key2:
            f = 1
            inp[i + 2] = inp[i]
            i -= 1

        if inp[i] < key2:
            inp[i + 2] = key2
            if inp[i] < key1:
                inp[i + 1] = key1
            else:
                while i != -1 and inp[i] > key1:
                    inp[i + 1] = inp[i]
                    i -= 1
                inp[i + 1] = key1
                # if f == 1:inp[i+3] = key2

        else:
            inp[i:i + 3] = key1, key2, inp[i]
    return inp


#inn = random.sample(range(10,50),5)
inn = [20,15,10,5]
print(f"Input : {inn}")

start_b = datetime.now().microsecond
#b_sorted = bubble(inn)
end_b = datetime.now().microsecond


start_i = datetime.now().microsecond
#i_sorted = insertion(inn)
end_i = datetime.now().microsecond

start = datetime.now().microsecond
our = mixed(inn)
end = datetime.now().microsecond

print(inn)
print(f"toe - our algo: {end-start}")
print(f"toe - bubble algo: {end_b-start_b}")
print(f"toe - insertion algo: {end_i-start_i}")
# print(our == b_sorted)
