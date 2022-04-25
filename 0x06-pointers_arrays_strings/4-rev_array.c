/**
 * reverse_array - reverse array
 * @a: int
 * @n: int
 * Result: return int of arr
 */
void reverse_array(int *a, int n)
{
int j;
int i;
j = n - 1;
i = 0;
for (i = 0; i < j; i++)
{
a[i] ^= a[j];
a[j] ^= a[i];
a[i] ^= a[j];
j--;
}
}
