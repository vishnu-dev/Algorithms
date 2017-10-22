def selectionSort(l):
    for i in range(len(l)):
        minind = i
        for j in range(i, len(l)):
            if l[minind] > l[j]:
                minind = j;
        l[minind], l[i] = l[i], l[minind]


if __name__ == '__main__':
    ls = [2, 1, 6, 3, 8]
    selectionSort(ls)
    print(ls)
