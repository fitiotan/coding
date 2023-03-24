def push(stack,item):
   stack.append(item)
def pop(stack):
   if(len(stack)==0):
       return
   return stack.pop()
def reverseString(string):
   stack = []
   for char in string:
       push(stack, char)
   string = ""
   while(len(stack)!=0):
       string = string + pop(stack)
   return string
string=input()
print("String after reversal is: ", reverseString(string))