
def insertionSort(ls):
    for i in range(len(ls)):
        for j in range(i - 1, -1, -1):
            if (ls[j] > ls[j+1]):
                ls[j], ls[j+1] = ls[j+1], ls[j]


if __name__ == '__main__':
    l = [2, 5, 3, 6, 1]
    insertionSort(l)
    print(l)
