# 01/19/2026

from math import hypot

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

distance = hypot(x2 - x1, y2 - y1)

print(f"{distance:.4f}")