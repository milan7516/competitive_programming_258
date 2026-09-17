code = input("Enter book code: ")

is_valid = True

if len(code) != 12:
    is_valid = False
else:
    part1 = code[0:3]
    dash1 = code[3]
    part2 = code[4:8]
    dash2 = code[8]
    part3 = code[9:12]

    if not (part1.isalpha() and part1.isupper()):
        is_valid = False
    if dash1 != '-':
        is_valid = False
    if not part2.isdigit():
        is_valid = False
    if dash2 != '-':
        is_valid = False
    if not part3.isdigit():
        is_valid = False

if is_valid:
    print(f"'{code}' is a valid book code.")
else:
    print(f"'{code}' is an invalid book code.")
