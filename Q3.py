x = int(input())
m = int(input())


def mi(x, m):

    for n in range(1, m):
        if(((x % m)*(n % m)) % m == 1):
            return (n)

    return (-1)


print(mi(x, m))
