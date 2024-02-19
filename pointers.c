#include <stdio.h>

char *text1 = "This is a string."; // Pekar på första tecknet (T)
char *text2 = "This is another string but longer."; // Pekar på första tecknet (Y)
int textArray1[50]; // Lagrar ASCII-värden från text1
int textArray2[50]; // Lagrar ASCII-värden från text2
int totalCharsCopied = 0; // Totalt antal kopierade tecken till båda arrayerna

// Implementera kopiering av ASCII-värden från en sträng till en array och räkna dem
// Notera att array indexing tillåts inte och allt måste hanteras via pointers!
void copyStringToAsciiValues(char *text, int *asciiValues, int *counter) {
  // Din kod här. Följande steg ska implementeras:
  // 1. Iterera genom strängen 'text'.
  // 2. AsciiValues konverterar strängar till Hexadecimala Ascii värden.
}
// Rör ej denna funktion (!)
// Bearbetar båda strängarna
void processTexts() {
    copyStringToAsciiValues(text1, textArray1, &totalCharsCopied);
    copyStringToAsciiValues(text2, textArray2, &totalCharsCopied);
}
// Rör ej denna funktion (!)
// Skriver ut ASCII-värden och motsvarande tecken för en given lista
void printAsciiValues(const int *textArray) {
    printf("ASCII-koder och motsvarande tecken:\n");
    while (*textArray != 0) { // Fortsätt till slutet av arrayen
        printf("0x%03X '%c' ", *textArray, (char)*textArray);
        textArray++; // Gå till nästa ASCII-värde i arrayen
    }
    printf("\n");
}
// Rör ej denna funktion (!)
int main(void) {
    processTexts();
    printf("\nlist1: ");
    printAsciiValues(textArray1);
    printf("\nlist2: ");
    printAsciiValues(textArray2);
    printf("\nTotalt antal kopierade tecken = %d\n", totalCharsCopied);
}