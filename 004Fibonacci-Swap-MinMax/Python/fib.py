
def fib(last_num):
    num1 = 1
    num2 = 0

    if last_num < 0:
        return

    print(num2)
    while num1 <= last_num:
        print(num1)
        num1, num2 = num1+num2, num1

    
if __name__ == '__main__':
    fib(10000)

