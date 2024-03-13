// #include <iostream>

// using namespace std ;

// int const n = 100;
// int mar[n][n];

// int m, e ;

// int main()
// {    
//     cin >> m >> e;
//     int x = 0, y = 0;
//     int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0}, d = 0 ;
//     for (int i = 1; i <= m * e ;i ++)
//     {
//         mar[x][y] = i ;
//         int a = x + dx[d], b = y + dy[d] ;
//         if (a < 0 || a >= m || b < 0 || b >= e || mar[a][b])
//         {
//             d = (d + 1) % 4 ;
//             a = x + dx[d], b =y + dy[d] ;
//         }
//         x = a, y = b ;
//     }

//     for (int i = 0; i < m; i ++ )
//     {
//         for (int j = 0; j < e; j ++)
//             cout << mar[i][j] << ' ';
//         cout << '\n' ;
//     }
//     return 0;
        
// }
#include <iostream>

using namespace std ;

int const n = 110;

int M[n][n];

int main()
{
    int rows, cols;
    cin >> rows >> cols ; 

    int x = 0, y = 0, d = 1 ;
    int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1} ;
    
    for (int i = 1; i <= cols * rows; i ++)
    {
        M[x][y] = i;
        int a = x + dx[d], b = y + dy[d] ;
        if (a < 0 || a >= rows || b < 0 || b >= cols || M[a][b])
        {
            d = (d + 1) % 4;
            a = x + dx[d], b = y + dy[d] ;
        }
        x = a, y = b;
    }
    for (int i = 0 ; i < rows ; i ++ )
    {
        for (int j = 0; j < cols; j ++)
            cout << M[i][j] << " ";
        cout << '\n' ; 
    }
    return 0; 
}

