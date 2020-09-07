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



def mixed(inp):
    c = 0
    m = 0
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
            c += 1      # tracking comparison
            f = 1
            inp[i + 2] = inp[i]
            m += 1        # tracking movement
            i -= 1

        if inp[i] < key2:
            c += 1  # tracking comparison
            inp[i + 2] = key2
            m += 1  # tracking movement
            if inp[i] < key1:
                inp[i + 1] = key1
                c += 1  # tracking comparison
                m += 1  # tracking movement

            else:
                c += 1
                while i != -1 and inp[i] > key1:
                    inp[i + 1] = inp[i]
                    i -= 1
                    c += 1  # tracking comparison
                    m += 1  # tracking movement
                c += 1
                inp[i + 1] = key1
                # if f == 1:inp[i+3] = key2

        else:
            c+=1
            inp[i:i + 3] = key1, key2, inp[i]
            m += 3
    print(f"Comparisons: {c} \nMovements: {m}")
    return inp


inn = [20,15,10,5]
s = mixed(inn)
print(s)
