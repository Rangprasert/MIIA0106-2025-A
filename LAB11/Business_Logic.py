def calculate_salary(emp_id,hours,rate):
    print("\n--- โปรแกรมคํานวณเงินเดือนพนักงาน ---")

    if hours >= 30:
        gross_salary = hours * (rate + 50)
    else:
        gross_salary = hours * rate

    tax = gross_salary * 0.07
    net_salary = gross_salary - tax

    print_show(emp_id,gross_salary,tax,net_salary)

def print_show(emp_id,gross_salary,tax,net_salary):

    print(f"พนักงานรหัส: {emp_id}")
    print(f"รายได้รวม: {gross_salary:,.2f} บาท")
    print(f"ภาษีที่หัก (7%): {tax:,.2f} บาท")
    print(f"รายได้สุทธิ: {net_salary:,.2f} บาท")


emp_id = input("รหัสพนักงาน: ")
hours = float(input("ชั่วโมงทํางาน: "))
rate = float(input("อัตราค่าจ้างต่อชั่วโมง: "))
calculate_salary(emp_id,hours,rate)


