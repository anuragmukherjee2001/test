#include <iostream>
using namespace std;

int a[20][20], v, s[20], visited[20], n, f = 0, top = -1;

void bfs(int v)
{

    for (int i = 0; i < n; i++)
    {

        if (a[v][i] && !visited[i])
        {
            s[++top] = i;
        }
    }
    if (f <= top)
    {
        visited[s[f]] = 1;
        bfs(s[++f]);
    }
}

int main()
{
    cout << "Enter the number of vertices ";
    cin >> n;
    cout << "Enter the adjacency matrix ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter root vertex ";
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        s[i] = 0;
        visited[i] = 0;
    }

    bfs(v);
    cout << "The output is ";

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            cout << " " << i << " ";
        }
    }
    return 0;
}