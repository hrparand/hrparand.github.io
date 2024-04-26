def main():
    mass = int(input("Give a number for mass in kilograms: "))
    print(equation(mass))

def equation(mass):
    energy = (mass * (300000000**2))
    return energy
main()
