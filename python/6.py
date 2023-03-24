x, y, z = 1, 6.7, '09'
print(type(x), type(y), type(z))
ans = x + int(z)

print(ans)
print(dir(z))   # 查看 z 這個字串變數有哪些屬性與方法

longstr = '''字串可用單引號
與雙引號，多行字串
使用三個單引號 '''
print(longstr[1:3]) # string as list