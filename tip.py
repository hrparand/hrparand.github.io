def main():
    dollars = dollars_to_float(input("How much was the meal? "))
    percent = percent_to_float(input("What percentage would you like to tip? "))
    tip = dollars * percent
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    #remove the $
    stripped = d.lstrip('$')
    #convert str to float
    return float(stripped)


def percent_to_float(p):
    #remove %
    stripped = p.rstrip('%')
    #convert str to float
    return float(stripped) / 100


main()
