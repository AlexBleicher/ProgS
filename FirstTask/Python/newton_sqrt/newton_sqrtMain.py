from newtonsqrtAlgo import *
numberinput = input("Enter a number to take the square root from: ")
first = int(numberinput)
latest = int(numberinput)

i = 1
while((latest*latest - first) > 0.0001 and i < 1000):
    latest = newton_sqrt(latest, first)
    i+=1

print("The square root of " + str(first) + " is (approximately): " + str(latest))