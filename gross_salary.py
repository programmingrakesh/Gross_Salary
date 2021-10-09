sal = float(input("Enter Your Salary: "))

if sal < 25000:
    hra = sal * 0.2
    da = sal * 0.8
elif sal >= 25000:
    hra = sal * 0.25
    da = sal * 0.9
elif sal <= 40000:
    hra = sal * 0.3
    da = sal * 0.95
else:
    print("ERROR!, Try Again.")

print(f"The Basic Salary:   {sal}")
print(f"The HRA: {hra}")
print(f"The DA: {da}")
print(f"The Gross Salary: {sal + hra + da}")
