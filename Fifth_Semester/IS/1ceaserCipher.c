#include <stdio.h>
#include <string.h>

// Function prototypes
void encrypt(char* plaintext, int key, char* ciphertext);
void decrypt(char* ciphertext, int key, char* plaintext);

int main() {
    int choice;
    char text[100];
    char result[100];
    int key;

    // User menu
    printf("Caesar Cipher\n");
    printf("1. Encrypt a message\n");
    printf("2. Decrypt a message\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    getchar(); // To consume the newline character after the choice input

    switch (choice) {
        case 1:
            // Encryption
            printf("Enter plaintext: ");
            fgets(text, sizeof(text), stdin);
            text[strcspn(text, "\n")] = '\0'; // Remove newline character from fgets
            printf("Enter key: ");
            scanf("%d", &key);
            encrypt(text, key, result);
            printf("Encrypted message: %s\n", result);
            break;
        case 2:
            // Decryption
            printf("Enter ciphertext: ");
            fgets(text, sizeof(text), stdin);
            text[strcspn(text, "\n")] = '\0'; // Remove newline character from fgets
            printf("Enter key: ");
            scanf("%d", &key);
            decrypt(text, key, result);
            printf("Decrypted message: %s\n", result);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

// Encrypt function
void encrypt(char* plaintext, int key, char* ciphertext) {
    int i;
    for (i = 0; plaintext[i] != '\0'; i++) {
        char ch = plaintext[i];
        if (ch >= 'a' && ch <= 'z') {
            ciphertext[i] = (ch - 'a' + key) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            ciphertext[i] = (ch - 'A' + key) % 26 + 'A';
        } else {
            ciphertext[i] = ch;
        }
    }
    ciphertext[i] = '\0'; // Null-terminate the ciphertext string
}

// Decrypt function
void decrypt(char* ciphertext, int key, char* plaintext) {
    int i;
    for (i = 0; ciphertext[i] != '\0'; i++) {
        char ch = ciphertext[i];
        if (ch >= 'a' && ch <= 'z') {
            plaintext[i] = (ch - 'a' - key + 26) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            plaintext[i] = (ch - 'A' - key + 26) % 26 + 'A';
        } else {
            plaintext[i] = ch;
        }
    }
    plaintext[i] = '\0'; // Null-terminate the plaintext string
}

/*Caesar Cipher
1. Encrypt a message
2. Decrypt a message
Enter your choice (1 or 2): 1
Enter plaintext: nabin
Enter key: 2
Encrypted message: pcdkp*/