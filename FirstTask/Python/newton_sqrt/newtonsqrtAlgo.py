def newton_sqrt(latest, first):
    if(latest<0 or first <0):
        print("Error: Number cannot be below zero!")
        raise ValueError
    return (0.5 * (latest + first/latest))