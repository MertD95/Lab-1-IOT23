#include <stdio.h>
#include <stdlib.h>
// Ändra ej denna funktion (!)
// Funktion för att be användaren om storleken på arrayen och returnera den
int getArraySize()
{
    int size;
    printf("Ange storleken pa arrayen: "); // Skriver ut en uppmaning till användaren
    scanf("%d", &size);                    // Läser in användarens input och sparar det i variabeln 'size'
    return size;                           // Returnerar den inlästa storleken
}

// Funktion för att initiera arrayen med heltal som räknas uppåt från ett startvärde
// Uppgift 2
void initializeArrayWithInput(int *arr, int size, int start)
{
    // TODO: Använd en loop och pekare för att tilldela värden till arrayen.
    // Varje plats i arrayen ska innehålla ett värde som börjar från 'start' och ökar med 1 för varje nytt element.
}

// Funktion för att öka värdet på varje element i arrayen med 2 med hjälp av pekararitmetik
// Uppgift 3
/*void performOperations(int *arr, int size)
{
    // TODO: Använd en loop och pekare för att öka varje element (förutom det första) med 2.
    // Börja med det andra elementet och fortsätt till slutet av arrayen.
}*/

// Ändra ej denna funktion (!)
// Funktion för att skriva ut arrayelementen och deras adresser
void printArrayAndAddresses(const int *arr, int size)
{
    printf("Arrayelement och adresser:\n"); // Skriver ut en rubrik
    // Loopar genom arrayen
    for (int i = 0; i < size; i++)
    {
        printf("Varde: %d, Adress: %p\n", *arr, (void *)arr); // Skriver ut värdet och adressen för varje element
        arr++;                                                // Flyttar pekaren till nästa element
    }
}
// Ändra ej förutom vid sista uppgiften (!)
// Huvudfunktionen där programmet startar
int main(void)
{
    int arraySize = getArraySize(); // Frågar efter och lagrar arrayens storlek
    // Allokerar dynamiskt minne för arrayen baserat på den önskade storleken
    int *myArray = (int *)malloc(arraySize * sizeof(int));

    // Kontrollerar om minnesallokeringen lyckades
    if (!myArray)
    {
        fprintf(stderr, "Minnesallokering misslyckades\n"); // Om inte, skriv ut ett felmeddelande
        return 1;
    }

    initializeArrayWithInput(myArray, arraySize, 1);

    // performOperations(myArray, arraySize);

    printArrayAndAddresses(myArray, arraySize);

    free(myArray); // Frigör det dynamiskt allokerade minnet
    return 0;      // Avslutar programmet korrekt
}