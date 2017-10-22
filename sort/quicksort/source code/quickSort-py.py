def qsort(l, st, end):
    if st == end:
        return

    back = end - 1
    for i in range(st + 1, end):
        if l[i] > l[st]:
            l[back], l[i] = l[back], l[i]
            back = back - 1
            i = i -1

    l[back], l[st] = l[st], l[back]
    qsort(l, st, back)
    qsort(l, back + 1, end)


if __name__ == '__main__':
    l = [22, 3,2,6,4,7, 12]
    qsort(l, 0, len(l))
    print(l)
