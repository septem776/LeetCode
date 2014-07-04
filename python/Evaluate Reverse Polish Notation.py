class Solution:
    # @param tokens, a list of string
    # @return an integer
    def evalRPN(self, tokens):
        li = []
        for s in tokens:
            if s == "+" or s == "-" or s == "*" or s == "/":
                a = int(li.pop())
                b = int(li.pop())
                #print("a=%d, b=%d" % (a, b))
                if s == "+":
                    num = b + a
                elif s == "-":
                    num = b - a
                elif s == "*":
                    num = b * a
                elif s == "/":
                    num = int(b / float(a))
                li.append(str(num))
            else:
                li.append(s)
            #print(li)
        return int(li.pop())

if __name__ == '__main__':
    so = Solution()
    tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
    print(so.evalRPN(tokens))