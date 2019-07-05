#include "holberton.h"

/**
 * leet - traslate an array of chars to leet
 * @arr: An array of chars
 * Return: Translated array
 */
char *leet(char *arr)
{
	int i = 0;
	int j = 0;
	char dic[5][2] = {{'A', 'a'}, {'E', 'e'}, {'O', 'o'}, {'T', 't'}, {'L', 'l'}};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (arr[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (dic[j][0] == arr[i] || dic[j][1] == arr[i])
			{
				arr[i] = num[j];
			}
		}
		i++;
	}
	return (arr);
}
