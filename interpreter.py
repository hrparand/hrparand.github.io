#define main to prompt for the (x, y, z)
def main():
    expression = input("provide x_y_z (Example:1 + 1): ")
    x, y, z = expression.split(" ")
    x = int(x)
    z = int(z)

    match y:
        case "+":
            result = x + z
        case "-":
            result = x - z
        case "*":
            result = x * z
        case "/":
            result = x / z
    print(f"Result: {result:.1f}")
main ()
