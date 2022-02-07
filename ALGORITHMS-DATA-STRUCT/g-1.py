# importing networkx
import networkx as nx
# importing matplotlib.pyplot
import matplotlib.pyplot as plt

g = nx.Graph()
g.add_edge(0,1)
g.add_edge(0,2)
g.add_edge(0,3)
g.add_edge(1,2)

nx.draw(g, with_labels = True,node_size=100, alpha=1, linewidths=10)

plt.savefig("./ALGORITHMS-DATA-STRUCT/img/graph0.png")
x=nx.adjacency_matrix(g)
print(x.todense())
