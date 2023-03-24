student = {'sid':'9A136740', 'sname':'Peter', 'age':20}
varA = 666
varB={123,"456"}
if not 'student' in dir():
    print('變數未定義')
else:
    if not student:
        print('變數為空值')
    else:
        print('\n'.join(['%s: %s' % (key, value) for (key, value) in student.items()]))

