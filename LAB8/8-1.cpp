import math

def f(x):
    return 0.9 * x**3 + 1.9 * math.cos(x) + 0.5

def antiderivative(x):
    return 0.225 * x**4 + 1.9 * math.sin(x) + 0.5 * x

def exact_integral(a, b):
    return antiderivative(b) - antiderivative(a)

def left_rectangles(a, b, n):
    h = (b - a) / n
    s = 0.0
    for i in range(n):
        s += f(a + i * h)
    return h * s

def right_rectangles(a, b, n):
    h = (b - a) / n
    s = 0.0
    for i in range(1, n + 1):
        s += f(a + i * h)
    return h * s

def trapezoidal(a, b, n):
    h = (b - a) / n
    s = (f(a) + f(b)) / 2.0
    for i in range(1, n):
        s += f(a + i * h)
    return h * s

def simpson(a, b, n):
    if n % 2 != 0:
        n += 1  
    h = (b - a) / n
    s = f(a) + f(b)
    for i in range(1, n):
        if i % 2 == 0:
            s += 2 * f(a + i * h)
        else:
            s += 4 * f(a + i * h)
    return h * s / 3

def main():
    a = math.pi / 16
    b = math.pi / 3
    exact = exact_integral(a, b)
    print(f"Точное значение интеграла: {exact:.6f}\n")
    
    k = int(input("Введите значение k: "))
    
    methods = [
        ("Левые прямоугольники", left_rectangles),
        ("Правые прямоугольники", right_rectangles),
        ("Трапеции", trapezoidal),
        ("Симпсон", simpson)
    ]
    
    for name, method in methods:
        print(f"\n{name}:")
        for n in [k, 10 * k]:
            approx = method(a, b, n)
            print(f"  n = {n}: {approx:.6f} (погрешность: {abs(exact - approx):.6f})")

if __name__ == "__main__":
    main()