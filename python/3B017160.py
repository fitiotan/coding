students = {
    "John": {"math": 89, "english": 78, "science": 92},
    "Emily": {"math": 92, "english": 90, "science": 95},
    "Tom": {"math": 80, "english": 85, "science": 88},
    "Alice": {"math": 78, "english": 88, "science": 90},
}
num = len(students)
print('Name','Math','English','Science','\t','Total','\t','Average')
for name, scores in students.items():
    outStr='\t'
    for key, value in scores.items():
        outStr += str(value)+'\t'
        Sum = sum(scores.values())
        Avg = Sum / len(scores)
    print(name, outStr, Sum,'\t', round(Avg,1))

math = sum([scores['math'] for scores in students.values()])
en = sum([scores['english'] for scores in students.values()])
sci = sum([scores['science']for scores in students.values()])

print("Sum:",'\t',math,'\t',en,'\t',sci)
print("Avg:",'\t',round(math/4,1),'\t',round(en/4,1),'\t',round(sci/4,1))