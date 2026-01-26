# 01/26/2026

N = int(input())

H = N // 3600
remaining_seconds = N % 3600
M = remaining_seconds // 60
S = remaining_seconds % 60

print(f"{H}:{M}:{S}")