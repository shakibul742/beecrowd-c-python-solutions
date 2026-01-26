# 01/26/2026

n = int(input())

year = n // 365
remaining = n % 365
month = remaining // 30
day = remaining % 30

print(f"{year} ano(s)")
print(f"{month} mes(es)")
print(f"{day} dia(s)")