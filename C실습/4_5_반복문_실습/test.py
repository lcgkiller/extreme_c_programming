def k(n):
    t=n
    start =0
    for x in range(n):
        ls=[]
        for x in range(n):
            if x==start or x==t-1:
                is.append("X")
            else:
                ls.append("O")
        start = start + 1
        t=t-1
        printf(ls)

k(10)