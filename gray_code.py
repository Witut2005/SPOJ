
def bin2gray(number):
    number_tmp = int(number)
    number_tmp = int(number_tmp / 10)

    result = 0
    counter = 1

    while number > 0:

        # print(result)
        # print(number)
        # print(number_tmp, "\n---------")

        if (number % 10) == 1 and (number_tmp % 10) == 1:
            result = result + 0
        elif (number % 10) == 0 and (number_tmp % 10) == 0:
            result = result + 0
        else:
            result = result + (1 * counter)

        number = int(number / 10)
        number_tmp = int(number_tmp / 10)
        counter = counter * 10

    return result

num = int(input('type number: '))

x = int(num)

while x > 0:
    if (x % 10) > 1:
        exit(-1)
    x = int(x / 10)

print('result: ', bin2gray(num))

