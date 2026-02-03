def calculate_area():
    print("\n--โปรแกรมคำนวณพื้นที่สี่เหลี่ยม--")
    width = float(input("ป้อนความกว้างพื้นที่ (width): "))
    length = float(input("ป้อนความยาวพื้นที่ (length): "))

    area = width*length
    print(f"พื้นที่สี่เหลี่ยมคือ {area:.2f} ตารางหน่วย")

calculate_area()