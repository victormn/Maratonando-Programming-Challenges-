#include <stdio.h>

int	main(){

	int first1, first2, last1, last2, n, size, counter, max;
	int i = 0;

	while(scanf("%d %d", &first1, &last1) != EOF){

		if (first1 > last1){
			first2 = last1;
			last2 = first1;
		}
		else{
			first2 = first1;
			last2 = last1;
		}

		max=0;

		for(i=first2; i<=last2; i++){

			n = i;
			counter = 0;

			while(n!=1){

				if (n%2 == 0) // par
					n /= 2;
				else // impar
					n = (n*3) + 1;

				counter++;

			}
			if (counter > max)
				max = counter;
		}

		printf("%d %d %d\n", first1, last1, max+1);
	}	

	return 0;
}