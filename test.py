def closest_to_zero(numbers):
    if not numbers:  # Cek apakah daftar kosong
        return None

    closest = None

    for num in numbers:
        # print(num)
        # Mengecek apakah lebih dari 0
        if closest is None or abs(num) < abs(closest) or (abs(num) == abs(closest) and num > closest):
            print(num)
            closest = num
    return closest

# Contoh penggunaan
numbers = [9, -0.49, -0.35, -0.20, -0.05, 0.1, 0.2, 0.44, 0.61, 0.80,1, 0.05]
print(closest_to_zero(numbers))  # Output: -1
