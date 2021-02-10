#include <iostream>
using namespace std;

int a[20][20], s[20], visited[20], n, top = -1, v;

void dfs(int v)
{
    for (int i = 0; i < n; i++)
    {

        if (a[v][i] && !visited[i])
        {
            s[++top] = i;
        }
    }

    if (top != -1)
    {
        visited[s[top]] = -1;
        dfs(s[top--]);
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
    cout << "Enter the root vertex ";
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        s[i] = 0;
        visited[i] = 0;
    }

    dfs(v);
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