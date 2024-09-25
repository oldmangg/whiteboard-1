#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char label;
    struct Node** edges;
    int edge_count;
} Node;

int exists_path(Node* start, Node* end, int* visited) {
    if (start == end) return 1;

    visited[start->label - 'A'] = 1; 

    for (int i = 0; i < start->edge_count; i++) {
        if (!visited[start->edges[i]->label - 'A']) {
            if (exists_path(start->edges[i], end, visited)) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {

    Node A = { 'A', NULL, 0 };
    Node B = { 'B', NULL, 0 };
    Node C = { 'C', NULL, 0 };
    Node D = { 'D', NULL, 0 };
    Node E = { 'E', NULL, 0 };
    Node F = { 'F', NULL, 0 };

    int visited[26] = { 0 }; 
    if (exists_path(&F, &A, visited)) {
        printf("A path exists from F to A.\n");
    }
    else {
        printf("No path exists from F to A.\n");
    }
    return 0;
}
