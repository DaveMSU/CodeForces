t = int(input())
while t>0:
  t -= 1
  abc = [int(i) for i in input().split()]
  abc = sorted(abc, reverse=True)
  if abc[0] == abc[1]:
    print("YES")
    print(abc[0], abc[2], abc[2])
  else:
    print("NO")
