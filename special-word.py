'''
source: cp4 - 1.3.4.1 - ej10
desc: a 'special word' is a lowercase alphabet followed by two consecutive digits
    given a string replace all 'special words' of length 3 with 3 stars "***"
example:
    line: a70 and z72 will be replaced, aa24 and a872 will not
    should be transformed to
    line: *** and ***
tags: regex pattern-matching
difficulty: easy
'''
import regex as re

word = input()

if re.match('[a-z][0-9][0-9]$', word): print ('***')
else: print (word)
