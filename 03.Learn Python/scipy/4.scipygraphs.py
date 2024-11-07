#connected
'''import numpy as np
from scipy.sparse.csgraph import connected_components
from scipy.sparse import csr_matrix
arr = np.array([
  [0, 1, 2],
  [1, 0, 0],
  [2, 0, 0]
])
newarr = csr_matrix(arr)
print(connected_components(newarr))

#dijikstra algorithm
import numpy as np
from scipy.sparse.csgraph import dijkstra
from scipy.sparse import csr_matrix

arr = np.array([
  [0, 1, 2],
  [1, 0, 0],
  [2, 0, 0]
])
newarr = csr_matrix(arr)
print(dijkstra(newarr, return_predecessors=True, indices=0))'''

#dijikstra algo
#dijskra algorithm
import networkx as nx
G=nx.Graph()
e=[('a','b',1),('b','c',2),('c','d',4),('d','e',2),('b','e',1)]
G.add_weighted_edges_from(e)
print(nx.dijkstra_path(G,'a','e'))
