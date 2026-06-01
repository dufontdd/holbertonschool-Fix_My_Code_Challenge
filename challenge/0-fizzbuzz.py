#!/usr/bin/python3
"""FizzBuzz"""
import sys  # <--- Étape 1 : On importe sys pour lire l'argument


def fizzbuzz(n):
    """Print numbers from 1 to n following FizzBuzz rules"""
    # Étape 2 : On va jusqu'à n + 1 pour inclure le nombre n
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end=" ")
        elif i % 3 == 0:
            print("Fizz", end=" ")
        elif i % 5 == 0:
            print("Buzz", end=" ")
        else:
            print(i, end=" ")


if __name__ == '__main__':
    # On vérifie qu'un argument a bien été fourni
    if len(sys.argv) > 1:
        # On convertit l'argument string en entier
        upper_limit = int(sys.argv[1])
        fizzbuzz(upper_limit)
