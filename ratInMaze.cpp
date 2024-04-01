#include <vector>
#include <string>

using namespace std;

bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<int>>& visited, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0);
}

void findPaths(vector<string>& paths, vector<vector<int>>& maze, vector<vector<int>>& visited, string path, int x, int y, int n) {
    if (x == n - 1 && y == n - 1) {
        paths.push_back(path);
        return;
    }

    // Mark the current cell as visited
    visited[x][y] = 1;

    // Explore all four directions
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<char> moves = {'U', 'D', 'L', 'R'};
    for (int i = 0; i < 4; i++) {
        int newX = x + directions[i].first;
        int newY = y + directions[i].second;
        if (isSafe(newX, newY, maze, visited, n)) {
            findPaths(paths, maze, visited, path + moves[i], newX, newY, n);
        }
    }

    // Backtrack: Unmark the current cell
    visited[x][y] = 0;
}

vector<string> ratMaze(vector<vector<int>>& maze) {
    int n = maze.size();
    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<string> paths;

    // Start the search from the top-left corner
    findPaths(paths, maze, visited, "", 0, 0, n);

    return paths;
}
