msg="This is a book."
countdict={}
for ch in msg:
    countdict.setdefault(ch, 0)
    print(countdict)
    input()
    countdict[ch]=countdict[ch]+1
    print(countdict)