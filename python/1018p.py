# 01/22/2026

money = int(input())
print(money)

remaining = money
note = [100, 50, 20, 10, 5, 2, 1]

for i in range(len(note)):
    count = remaining // note[i]
    remaining = remaining % note[i]

    print(f"{count} nota(s) de R$ {note[i]},00")