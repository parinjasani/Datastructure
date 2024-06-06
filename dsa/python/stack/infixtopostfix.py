def prec(c):
    if c=='^':
        return 3
    elif c=='*' or c=='/':
        return 2
    elif c=='+' or c=='-':
        return 1
    else :
        return -1
def associativity(c):
    if c=='^':
        return 'r'
    return 'l'

def infix_to_postfix(s):
    stack=[]
    result=[]
    for i in range(len(s)):
        c=s[i]
        if ('a'<=c<='z') or ('A'<=c<='B') or ('0'<=c<='9'):
            result.append(c)
        elif c=='(':
            stack.append(c)
        elif c==')':
            while stack and stack[-1]!='(':
                result.append(stack.pop())
            stack.pop() #for pop '('
        else:
            while stack and (prec(s[i])<prec(stack[-1]) or prec(s[i]) == prec(stack[-1]) and associativity(s[i])=='l'):
                result.append(stack.pop())
            stack.append(c)
    while stack:
        result.append(stack.pop())
    print(''.join(result))

infix_to_postfix('a+b*(c^d-e)^(f+g*h)-i')