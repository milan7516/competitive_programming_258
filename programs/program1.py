N = int(input("Enter number of students: "))

attendance = []

if N <= 0:
    print("Number of students must be greater than 0.")
else:
    for i in range(N):
        value = float(input(f"Enter attendance for student {i + 1}: "))
        attendance.append(value)

    threshold = 65.0
    for a in attendance:
        if a < 0 or a > 100:
            print("Attendance must be between 0 and 100.")
            exit()
    
    low_attendance_students = sum(1 for a in attendance if a < threshold)

    lowest_attendance = min(attendance)
    lowest_position = attendance.index(lowest_attendance) + 1

    average = sum(attendance) / N

    print(f"Number of students with attendance below {threshold}%: {low_attendance_students}")
    print(f"Lowest attendance: {lowest_attendance}% (Student {lowest_position})")
    print(f"Average attendance: {average:.2f}%")
