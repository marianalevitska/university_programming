int str_sum[] = {};
int max_str[] = {};
int max_str_id[] = {};
for (int i = 0; i < n; i++)
{
    str_sum[i] = 0;
    for (int j = 0; j < m; j++)
    {
        printf("[%d][%d]=%d ", i, j, line[i][j]);
        str_sum[i] += line[i][j]; //вычисляем сумму эл-тов строки
    }
    printf("\nSum of line's elements: %d \n", str_sum[i]);
}
int x;
max_str = str_sum[0];
for (x = 0; x < m; x++)
{
    if (max_str < str_sum[x])
    {
        max_str = str_sum[x];
        max_str_id = x;
    }
}
printf("Max sum = %d and line number - %d  \n \n", max_str, max_str_id);

for (i = 0; i < m; i++)
{
    printf("[%d][%d]=%d ", max_str_id, i, line[max_str_id][i]);
}