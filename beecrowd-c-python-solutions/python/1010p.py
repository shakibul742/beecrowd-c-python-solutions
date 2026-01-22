# 01/18/2026

product_1, unit_1, price_1 = input().split()

product_1 = int(product_1)
unit_1 = int(unit_1)
price_1 = float(price_1)

product_2, unit_2, price_2 = input().split()

product_2 = int(product_2)
unit_2 = int(unit_2)
price_2 = float(price_2)

value = (unit_1 * price_1) + (unit_2 * price_2)

print(f"VALOR A PAGAR: R$ {value:.2f}")
