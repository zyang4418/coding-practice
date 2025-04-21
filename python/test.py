x = int(input("请输入一个整数："))

if x <= 1:
    print(f"{x} 不是素数")
else:
    sqrt_x = int(x ** 0.5) + 1
    is_prime = True
    for i in range(2, sqrt_x):
        if x % i == 0:
            is_prime = False
            break
    if is_prime:
        print(f"{x} 是素数")
    else:
        print(f"{x} 不是素数")