/**
 * _strspn - prefix length
 * @s: string1
 * @accept: accept string
 * Return: num
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				num++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (num);
}

