/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: length of string or return 0
 */

int _strlen_recursion(char *s)
{

	/* base case */
	if (*s == '\0')

		return (0);

	return (1 + _strlen_recursion(s + 1));

}

/**
 * cmpr - this func compares elements in a string
 * @s: string for comparison
 * @len: length of string
 * @i: index
 * Return: return 1, otherwise 0
 */
int cmpr(int len, char *s, int i)
{
	if (s[i] != s[len - i])

		return (0);

	if (i == len)

		return (1);

	return (cmpr(len, s, i + 1));
}


/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: string to check
 *
 * Return: return 1, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')

		return (1);

	return (cmpr(_strlen_recursion(s) - 1, s, 0));
}
