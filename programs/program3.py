N = int(input("Enter number of students: "))

if N <= 0:
    print("Number of students must be greater than 0.")
else:
    names = []
    for i in range(N):
        name = input(f"Enter name of student {i + 1}: ")
        names.append(name)

    search_name = input("Enter name to search: ")

    case_sensitive_found = False
    case_sensitive_pos = -1

    for i in range(N):
        if names[i] == search_name:
            case_sensitive_found = True
            case_sensitive_pos = i + 1
            break

    case_insensitive_found = False
    case_insensitive_pos = -1

    for i in range(N):
        if names[i].lower() == search_name.lower():
            case_insensitive_found = True
            case_insensitive_pos = i + 1
            break

    print("\nCase-Sensitive Search:")
    if case_sensitive_found:
        print(f"Student '{search_name}' found at position {case_sensitive_pos}.")
    else:
        print(f"Student '{search_name}' not found.")

    print("\nCase-Insensitive Search:")
    if case_insensitive_found:
        print(f"Student '{search_name}' found at position {case_insensitive_pos}.")
    else:
        print(f"Student '{search_name}' not found.")
