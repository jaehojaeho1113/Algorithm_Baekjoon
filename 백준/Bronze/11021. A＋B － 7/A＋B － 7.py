T=int(input())
a=1
for i in range(T):
    A,B=map(int,input().split())
    print(f'Case #{a}:',A+B)
    a+=1