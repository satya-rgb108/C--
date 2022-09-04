def fibonaci(n):
    a =0
    b=1
    i =0
    fib =[0,1]
    while i<=n-2 :
        sum =a+b
       # print(sum,end="")
        fib.append(sum)
        a=b
        b=sum
        i=i+1
    
    return fib
print(fibonaci(int(input("First n fibonaci number: "))))