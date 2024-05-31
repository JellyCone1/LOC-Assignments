#include <iostream> 

// Function to count number 
// of vowels and consonant 
void count_vow_cons(char* str) 
{ 
	// Declare the variable vowels and consonant 
	int vowels = 0, consonants = 0; 

	int i; 
	char ch; 

	// Take each character from this string to check 
	for (i = 0; str[i] != '\0'; i++) { 

		ch = str[i]; 

		// If this character is a vowel, 
		// increment the count of vowels 
		if (ch == 'a' || ch == 'e'
			|| ch == 'i' || ch == 'o'
			|| ch == 'u' || ch == 'A'
			|| ch == 'E' || ch == 'I'
			|| ch == 'O' || ch == 'U') 
			vowels++; 

		// If this character is a space 
		// skip it 
		else if (ch == ' ') 
			continue; 

		else
			// Else increment the count of consonants 
			consonants++; 
	} 

	// Print the total count of vowels and consonants 
	std::cout<<"\nVowels: "<< vowels; 
	std::cout<<"\nConsonants: "<< consonants-1; 
} 

// Driver function. 
int main() 
{ 
	char str[100]; 
	std::cout<<"Enter String: ";
    fgets(str,sizeof(str),stdin); 

	count_vow_cons(str); 

	return 0; 
} 
