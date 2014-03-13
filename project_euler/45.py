for i in range(10000):
    for j in range(1000):
        for k in range(1000):
            if i*(i+1)/2==j*(3*j-1)/2 and i*(i+1)/2==k*(2*k-1):
                print k*(2*k-1)
                break
