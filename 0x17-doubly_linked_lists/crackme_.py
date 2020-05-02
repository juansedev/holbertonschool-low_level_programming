#!/usr/bin/python3
pwd = input('Password: ')
ok = 'Zen of Python'
ok = ok + ' C'
ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
print(ok)
if pwd == ok:
        print('asda')
else:
        print('emtre')
