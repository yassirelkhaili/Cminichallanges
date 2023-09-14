#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	index = 2;
	if (nb <= 1)
		return 0;
	while (index * index <= nb)
	{
		if (nb % index == 0)
			return 0;
		index++;
	}
	return 1;
}

int main ()
{
    int num;
    char *response;
    printf("Enter a number: \n");
    scanf("%d", &num);
    response = ft_is_prime(num) ? "The number is prime" : "The number is not prime";
    printf("%s", response);
    return 0;
}