# 01-16-2026

seller_name = input()
fixed_salary = float(input())
total_sale_amount = float(input())

bonus_salary = total_sale_amount * 0.15
total_salary = fixed_salary + bonus_salary

print(f"TOTAL = R$ {total_salary:.2f}")