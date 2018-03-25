import sys

USAGE = '''usage: python collatz.py [option] [args]
options:
-p [a_0]
-a [min list len]'''


def print_list(a):
    a_list = []

    while a != 1:
        if a % 2 == 0:
            a_list.append(a)
            a = a // 2
        else:
            a_list.append(a)
            a = 3 * a + 1

    a_list.append(a)
    print(a_list)


def min_answer(min_list_len):
    a_0 = 0
    a_list_len = 0

    while a_list_len < min_list_len:
        a_0 += 1
        a = a_0
        a_list_len = 0
        while a != 1:
            if a % 2 == 0:
                a_list_len += 1
                a = a // 2
            else:
                a_list_len += 1
                a = 3 * a + 1
        a_list_len += 1

    print('answer: ' + str(a_0))


def error():
    print(USAGE)
    sys.exit(1)


if len(sys.argv) != 3 or sys.argv[2].isdigit() is False or int(sys.argv[2]) == 0:
    error()
elif sys.argv[1] == '-p':
    print_list(int(sys.argv[2]))
elif sys.argv[1] == '-a':
    min_answer(int(sys.argv[2]))
else:
    error()
