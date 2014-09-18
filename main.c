#include<stdio.h>
#define uint unsigned int

#include <stdio.h>

string = "Hello world!";

AmountOfCharAt(String, Char) {
    return !*(char*) String ? 0 : (Char == *(char*) String) + AmountOfCharAt(String + 1, Char);
}

#define cl 'l'

main() {
	printf("In string \"%s\" is %d occurrence of symbol \'l\'", string,
			AmountOfCharAt(string, 'l'));
	return 0;
}

/* So, this function is supposed to count the occurence of letters in a string  *
 * that is input by the user, which is great since I don't know strings or      *
 * pointers but I know enough to see tha they're both used here. Anyway...      *
 */


#include <stdio.h>

// returns true if a is a substring of b, false otherwise.
int in_string(const char* a, const char *b)
{
    return ! *a || (*b && ((*a == *b && in_string(a+1,b+1)) || in_string(a,b+1)));
}

int main()
{
    printf("Should be:\n1 0 1 1 1 1 0 0 0\n");

    printf("Test results:\n");
    printf("%d ", in_string("",""));
    printf("%d ", in_string("a",""));
    printf("%d ", in_string("","yo"));
    printf("%d ", in_string("yo","yo"));
    printf("%d ", in_string("y","yo"));
    printf("%d ", in_string("o","yo"));
    printf("%d ", in_string("b","yo"));
    printf("%d ", in_string("by","yo"));
    printf("%d\n", in_string("byo","yo"));

    return 0;
}
