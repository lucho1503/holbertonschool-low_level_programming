1e.c search algorithms

0. search for a value in array using the linear search algorithm

1. search for a value in array using the binary search algorithm

2. time complexity of a linear search algorithm

3. space complexity of a iteraitive linear search algorithm

4. time complexity of a binary search algorithm

5. space complexity of a binary search algorithm

6. space complexity this function

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}