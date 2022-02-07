### Data Structure ###
## GRAPH ##
> A graph data structure is a collection of nodes that have data and are connected to other nodes.
> A Graph is a finite collection of objects and relations existing between objects. If we represent objects as vertices(or nodes) and relations as edges then we can get following two types of graph.
- **Directed Graphs**: In directed graph, an edge is represented by an ordered pair of vertices (i,j) in which edge originates from vertex i and terminates on vertex j. Given below is an example of an directed graph.
![graph](/ALGORITHMS-DATA-STRUCT/img/directedGraph.webp)
- **Undirected Graphs**: In Undireced graph, edges are represented by unordered pair of vertices.Given below is an example of an undirected graph.
![graph](/ALGORITHMS-DATA-STRUCT/img/undirectedGraph.webp)

More precisely, a graph is a data structure (V, E) that consists of :
- A collection of vertices V
- A collection of edges E, represented as ordered pairs of vertices (u,v)
# example off Graph : #

![graph](/ALGORITHMS-DATA-STRUCT/img/graph-vertices-edges_0.webp)

# in this graph : #
```
V = {0, 1, 2, 3}
E = {(0,1), (0,2), (0,3), (1,2)}
G = {V, E}
```
- Graph Terminology :
    - **Adjacency** : A vertex is said to be adjacent to another vertex if there is an edge connecting them Vertices 2 and 3 are not adjacent because there is no edge between them.
    - **Path** : A sequence of edges that allows you to go from vertex A to vertex B is called a path .0-1, 1-2 and 0-2 are paths from vertex 0 to vertex 2.
    - **Directed Graph**: A graph in which an edge (u,v) doesn't necessarily mean that there is an edge (v, u) as well. The edges in such a graph are represented by arrows to show the direction of the edge.
- Graph Representation :
Graphs are commonly represented in two ways:
    - **Adjacency Matrix** :Let us consider a graph in which there are N vertices numbered from 0 to N-1 and E number of edges in the form (i,j). Where (i,j) represent an edge originating from ith vertex and terminating on jth vertex. Now, A Adjacency Matrix is a N*N binary matrix in which value of [i,j]th cell is 1 if there exists an edge originating from ith vertex and terminating to jth vertex, otherwise the value is 0.
  
![graph](/ALGORITHMS-DATA-STRUCT/img/adjacency-matrix_1.webp)
    - **Adjacency List** :Lets consider a graph in which there are N vertices numbered from 0 to N-1 and E number of edges in the form (i,j). Where (i,j) represent an edge from ith vertex to jth vertex. Now, Adjacency List is an array of seperate lists. Each element of array is a list of corresponding neighbour(or directly connected) vertices.In other words ith list of Adjacency List is a list of all those vertices which is directly connected to ith vertex.
![graph](/ALGORITHMS-DATA-STRUCT/img/adjacency-list.webp)

- Graph Operations :
    - Check if the element is present in the graph.
    - Graph Traversal.
    - Add elements(vertex, edges) to graph.
    - Finding the path from one vertex to another.
- Complexity :
    `N` denotes the number of nodes/ vertices and M denotes the number of edges
    `degree(V)` denotes the number of edges from node V
    - Adjacency Matrix Complexity :
      - Space: _O(N*N)_
      - Check if there is an edge between nodes U and V: _O(1)_
      - Find all edges from a node: _O(N)_
    - Adjacency List Complexity :
      - Space: _O(N+M)_
      - Check if there is an edge between nodes U and V: _O(degree(V))_
      - Find all edges from a node V: _O(degree(V))_
- where we use ! :
    As we have seen in complexity comparisions both representation have their pros and cons and implementation of both representation is simple. It is recommended that we should use Adjacency Matrix for representing Dense Graphs and Adjacency List for representing Sparse Graphs.

    Note: Dense Graph are those which has large number of edges and sparse graphs are those which has small number of edges.

- Application :
    - **Adjacency Matrix**: 
    Adjacency matrix is used where information about each and every possible edge is required for the proper working of an algorithm like :- Floyd-Warshall Algorithm where shortest path from each vertex to each every other vertex is calculated (if it exists). It can also be used in DFS (Depth First Search) and BFS (Breadth First Search) but list is more efficient there. Sometimes it is also used in network flows.

    - **Adjacency List**:
    Adjacency List is a space efficient method for graph representation and can replace adjacency matrix almost everywhere if algorithm doesn't require it explicitly. It is used in places like: BFS, DFS, Dijkstra's Algorithm etc.