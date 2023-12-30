n = int(input())
cows = []
for i in range(n):
    s = input()
    x = int(s.split(" ")[0])
    y = int(s.split(" ")[1])
    for j in range(x):
        cows.append(y)
cows.sort()
left = 0
right = len(cows)-1
ans = 0
while left <= right:
    ans = max(ans, cows[left] + cows[right])
    left += 1
    right -= 1
