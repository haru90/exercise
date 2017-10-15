# fizz_buzz.py

for i in range(1, 101):
    str = ''
    if i % 3 == 0:
        str = 'Fizz'
    if i % 5 == 0:
        str += 'Buzz'
    if len(str) == 0:
        print(i)
    else:
        print(str)
