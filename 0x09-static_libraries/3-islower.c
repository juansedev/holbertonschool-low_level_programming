/**
 * _islower - validate if a character belongs to alphabet lowercase
 * @c: Character to validate
 * Return: 1 if the character is lowercase. 0 othewhise.
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	} else
		return (0);
}
