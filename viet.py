def Vietochka():
    try:
        arr = list(map(int, input().split()))
        a, b, c = arr
        for x1 in range(min(-c // a, c // a), max(-c // a, c // a) + 1, 1):
            if (x1!=0) and ((c//a)%x1 == 0) and (x1 + (c//a + 1)//x1 == -b//a):
                print(' '.join(map(str, list(set([x1, (c//a + 1)//x1])))))
                break
    except Exception as e: print(repr(e)); pass
Vietochka()