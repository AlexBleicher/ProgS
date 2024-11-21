def main():
    arr = []
    for i in range(0, 10):
        j = 0

        def fun():
            nonlocal j
            j += 1
            print(j)

        arr.append(lambda: fun())

    for f in arr:
        f()
main()