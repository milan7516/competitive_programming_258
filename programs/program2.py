N = int(input("Enter number of hours: "))

if N <= 0:
    print("Number of hours must be greater than 0.")
else:
    patients = []
    for i in range(N):
        count = int(input(f"Enter patients in hour {i + 1}: "))
        patients.append(count)

    max_patients = max(patients)
    max_hour = patients.index(max_patients) + 1

    min_patients = min(patients)

    peak_hour = max_hour

    average = sum(patients) / N

    above_average_hours = 0
    for count in patients:
        if count > average:
            above_average_hours += 1

    print(f"Maximum number of patients: {max_patients} (Hour {max_hour})")
    print(f"Minimum number of patients: {min_patients}")
    print(f"Peak hour: Hour {peak_hour}")
    print(f"Number of hours above average: {above_average_hours}")
