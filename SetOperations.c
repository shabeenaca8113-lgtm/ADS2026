#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Helper function to check whether an element exists in a set
bool contains(int set[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (set[i] == element)
        {
            return true;
        }
    }
    return false;
}

// Function to print a set
void printSet(int set[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", set[i]);

        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf(" }\n");
}

// Function to find the union of two sets
void findUnion(int setA[], int sizeA, int setB[], int sizeB)
{
    int setC[MAX];
    int sizeC = 0;

    for (int i = 0; i < sizeA; i++)
    {
        if (!contains(setC, sizeC, setA[i]))
        {
            setC[sizeC++] = setA[i];
        }
    }

    for (int i = 0; i < sizeB; i++)
    {
        if (!contains(setC, sizeC, setB[i]))
        {
            setC[sizeC++] = setB[i];
        }
    }

    printf("Union (A U B): ");
    printSet(setC, sizeC);
}

// Function to find the intersection of two sets
void findIntersection(int setA[], int sizeA, int setB[], int sizeB)
{
    int setC[MAX];
    int sizeC = 0;

    for (int i = 0; i < sizeA; i++)
    {
        if (contains(setB, sizeB, setA[i]) &&
            !contains(setC, sizeC, setA[i]))
        {
            setC[sizeC++] = setA[i];
        }
    }

    printf("Intersection (A n B): ");
    printSet(setC, sizeC);
}

// Function to find the difference of two sets
void findDifference(int setA[], int sizeA, int setB[], int sizeB)
{
    int setC[MAX];
    int sizeC = 0;

    for (int i = 0; i < sizeA; i++)
    {
        if (!contains(setB, sizeB, setA[i]) &&
            !contains(setC, sizeC, setA[i]))
        {
            setC[sizeC++] = setA[i];
        }
    }

    printf("Difference (A - B): ");
    printSet(setC, sizeC);
}

int main()
{
    int setA[] = {1, 3, 5, 7, 9};
    int setB[] = {2, 3, 5, 8, 9, 10};

    int sizeA = sizeof(setA) / sizeof(setA[0]);
    int sizeB = sizeof(setB) / sizeof(setB[0]);

    printf("Set A: ");
    printSet(setA, sizeA);

    printf("Set B: ");
    printSet(setB, sizeB);

    printf("-------------------------------------------\n");

    findUnion(setA, sizeA, setB, sizeB);
    findIntersection(setA, sizeA, setB, sizeB);
    findDifference(setA, sizeA, setB, sizeB);
    findDifference(setB, sizeB, setA, sizeA);

    return 0;
}

