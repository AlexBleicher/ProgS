def makeConverter(f, o):
    return lambda i: (o+i)*f

milesToKm = makeConverter(1.60936, 0.0)
poundsToKg = makeConverter(0.45460, 0.0)
fahrenheitToCelsius = makeConverter(0.5556, -32.0)

print(milesToKm(10))
print(poundsToKg(2.5))
print(fahrenheitToCelsius(98))