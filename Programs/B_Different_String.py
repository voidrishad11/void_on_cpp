t = int(input())

for _ in range(t):
    s = input().strip()
    
    if len(s) == 1:
        print("NO")
    else:
        sorted_s = ''.join(sorted(s))
        if sorted_s == s:
            print("NO")
        else:
            print("YES")
            print(sorted_s)
