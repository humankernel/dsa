'''
desc: given a string that represents a base X number, convert it to an equivalent string
    in base Y, 2 <= X,Y <= 36
example:
    FF (in base 16) is "255" in base Y = 10, "11111111" in base Y = 2.
state: unfinished
'''
a = input()
base = int(input())

a = int(a, base)
print (a)
