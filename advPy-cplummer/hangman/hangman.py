## MENU DRIVEN w/ Play game, quit game, display status of the player, and create a new player
## Choose a random word form a list of at least 20 english words that must be read from an input text file
## Program must track players stat and store the stat and players info into a file: %of win, loss, ties.
## Validate player input: reject numbers and symbols and accept only one character at a time.

import random

print("Welcome to Hangman by Caiden Plummer")
print("Would you like to play (1)New Game, (2)Quit Game, (3)Display Profile, or (4)Create a New Profile?")
menuchoice = input("Enter Choice:")

def playgame():
    readfile = open("wordslist.txt", "r")
    listofwords = readfile.readlines()
   
    word = random.choice(listofwords)
    print("Guess a Letter!")
    guesses = ''
    turns = 5

    while turns > 0:
        wrongguess = 0
        for char in word:
            if char in guesses:
                print(char)
            else:
                print("_")
                wrongguess += 1

        if wrongguess == 0:
            print("Great Job! You guessed it!")
            print("The word is ", word)
            break

        guess = input("Guess a character?")
        validate2 = guess.isalpha()
        if validate2 == True:
            guesses += guess
            if guess not in word:
                turns -= 1
                print("Oops! Wrong guess.")
                print("You have", + turns, 'more guesses')
                if turns == 0:
                    print("You've been hung! The word was:", word)







    

if menuchoice == "1":
    print("Booting Game...")
    playgame()

if menuchoice == "2":
    print("Quitting Game...")
    exit()

if menuchoice == "3":
    print("Displaying Profile...")
    #displayprofile()

if menuchoice == "4":
    "Creating New Profile..."
    #create profile

else:
    exit()












