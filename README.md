# C-programme

BACKGROUND.

*The user will be prompte for the key plaintext which will can be a string of tenx.
*The key must contain only 26 UNIQUE ailphabets.
*The program will then print the ciphertext which each alphabetical character  in ciphertext character substitutedfor the corresponding character in ciphertext.


PAREMETERS TO CINSIDER.
*Non-alphabetic character are not converted.
*Lower-case characters remain lower-case and uppercase character remain uppercase.

STRUCTURE OF MY CODE.
*Check that the user provide exactly one command-line argument.
    -if not print "Usage: ./substitution key"
*Validate that key consists only of alphabets.
    -if not print "Usage: ./substitution"
*Validate that the key consists of 26  characters.
    -  if not print "Key must contain 26 characters.
*Validate the key consists only o unique code alphabets
    -if not print "Usage: ./substitution"
*Prompt the user for plaintext.
*Print the Ciphertext.
