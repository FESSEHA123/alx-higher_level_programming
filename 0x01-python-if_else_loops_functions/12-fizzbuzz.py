#!/usr/bin/python3
def fizzbuzz():
      for number in range(1, 101):
            if number % 3 == 0 and number % 5 == 0:
                  print("FizzBuzz", end=" ")
            elif number % 3 == 0:
                  print("Fizz", end=" ")
            elif number % 5 == 0:
                  print("Buzz", end=" ")
            else:
                  print(number, end="")








    for num in range(1, 101):
        if num % 15 == 0:
            print("FizzBuzz", end=" ")
        elif num % 5 == 0:
            print('Buzz', end=" ")
        elif num % 3 == 0:
            print("Fizz", end=" ")
        else:
            print(num, end=" ")
