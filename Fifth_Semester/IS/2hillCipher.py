""" Implement Hill Cipher to Encrypt and Decrypt the word “GOOD” using key matrix 
[7 3]
[7 4]"""
def to_num(letter):
    return ord(letter) - ord('A')


def to_letter(number):
    return chr(number + ord('A'))


def determinant_matrix(key):
     determinant = key[0][0] * key[1][1] - key[0][1] * key[1][0]
     return determinant



def inverse_matrix(key):
    determinant = determinant_matrix(key)
    scalar = 0
    if determinant == 0 or not len(key) == 2:
        return None
    for i in range(26):
        ecuation = (i * determinant) % 26
        if ecuation == 1:
            scalar = i
            break
        else:
            None
    return [[(key[1][1] * scalar) % 26, ((-1 * key[0][1] % 26) * scalar) % 26],
            [((-1 * key[1][0] % 26) * scalar) % 26, (key[0][0] * scalar) % 26]]


def vector_matrix_multiplication(key, vector):
    result = [0, 0]
    for i in range(2):
        for j in range(2):
            result[i] += key[i][j] * vector[j]
            result[i] %= 26
    return result


def hill_encrypt(word, key):
    encrypted_word = ""
    for i in range(0, len(word), 2):
        vector = [to_num(word[i]), to_num(word[i + 1])]
        encrypted_vector = vector_matrix_multiplication(key, vector)
        encrypted_letters = [to_letter(num) for num in encrypted_vector]
        encrypted_word += "".join(encrypted_letters)

    return encrypted_word


def hill_decrypt(encrypted_word, key):
    decrypted_word = ""
    for i in range(0, len(encrypted_word), 2):
        vector = [to_num(encrypted_word[i]), to_num(encrypted_word[i + 1])]
        decrypted_vector = vector_matrix_multiplication(inverse_matrix(key), vector)
        decrypted_letters = [to_letter(num) for num in decrypted_vector]
        decrypted_word += "".join(decrypted_letters)

    return decrypted_word



key = [[7, 3], [7, 4]]
message = "GOOD"
encrypted_message = hill_encrypt(message, key)
print("Encrypted message: ", encrypted_message)
decrypted_message = hill_decrypt(encrypted_message, key)
print("Decrypted message: ", decrypted_message)  # Output: GOOD

    