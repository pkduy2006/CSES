s = input()
pre = ''
res = 1
cnt = 1
for x in s:
    if x != pre:
        res = max(res, cnt)
        pre = x
        cnt = 1
    else:
        cnt += 1
res = max(res, cnt)
print(res)