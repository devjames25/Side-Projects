import string

if __name__ == "__main__":

	wordCounter = 0

	word = input("Enter word that you want to find: ")

	file = open("notepad.txt", "r")
	for line in file:
		if word in line: 
			wordCounter+=1
			print("The searched word '" + word + "' has been found " + str(wordCounter) + " times")
