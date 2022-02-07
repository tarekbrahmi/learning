### Data Structure ###
## GRAPH ##
> A graph data structure is a collection of nodes that have data and are connected to other nodes.
More precisely, a graph is a data structure (V, E) that consists of :
- A collection of vertices V
- A collection of edges E, represented as ordered pairs of vertices (u,v)
# example off Graph : #

![graph](/ALGORITHMS-DATA-STRUCT/img/graph0.png)

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
> Graphs are commonly represented in two ways:
    - 
- Graph Operations :