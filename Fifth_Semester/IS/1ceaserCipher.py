# Implement Ceaser Cipher
def encrypt(plaintext,n):
    ans = ""
    # iterate over the given text
    for i in range(len(plaintext)):
        ch = plaintext[i]
        
        # check if space is there then simply add space
        if ch==" ":
            ans+=" "
        # check if a character is uppercase then encrypt it accordingly 
        elif (ch.isupper()):
            ans += chr((ord(ch) + n-65) % 26 + 65)
        # check if a character is lowercase then encrypt it accordingly
        
        else:
            ans += chr((ord(ch) + n-97) % 26 + 97)
    
    return ans

def decrypt():
    
    #enter your encrypted message(string) below
    encrypted_message = input("Enter ciphertext: ").strip().lower()
    
    letters="abcdefghijklmnopqrstuvwxyz"
    
    #enter the key value to decrypt
    k = int(input("Enter key : "))
    decrypted_message = ""

    for ch in encrypted_message:

        if ch in letters:
            position = letters.find(ch)
            new_pos = (position - k) % 26
            new_char = letters[new_pos]
            decrypted_message += new_char
        else:
            decrypted_message += ch
    print("Your decrypted message is:",decrypted_message)

plaintext = input("Enter message to encrypt: ")
n = int(input("Enter Key: "))
print("Cipher Text is : " + encrypt(plaintext,n))
decrypt()
