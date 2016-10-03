// Answer to this - http://stackoverflow.com/questions/39821714/pass-array-by-reference-in-c/39821774?noredirect=1

#include <stdio.h>

void primesUpTo(int max,int resPt[]);
int main(int argc, char **argv)
{
    const int MAX = 10;
    int primes[MAX], i;

    /*TEST*/for(int i = 0; i < MAX;primes[i] = ++i);  //This Semi-Colon added
		primesUpTo(MAX,primes); // Pointer to array will be copied but not the array)
	return 0;
}

/* Primes up to function
 * Fills array that *resPt points to with primes from 0 to 'max'
 *  *resPt: pointer to first element of result array
 *  max: int, highest prime number in result array
 *  
 *  *resPt must be passed as reference
 */
void primesUpTo(int max, int resPt[]) // Value of primes is copied to resPt and now they both point to the same location.
{
	int i;
    /*TEST*/for(i = 0; i < max; i++)
        printf("\nTEST: %d",(resPt[i])); 
}
