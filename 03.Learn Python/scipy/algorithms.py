#depth first search
'''vertexList = ['0', '1', '2', '3', '4', '5', '6']
edgeList = [(0,1), (0,2), (1,0) , (1,3) , (2,0) , (2,4) , (2,5) , (3,1), (4,2) , (4,6), (5,2), (6,4)]
graphs = (vertexList, edgeList)
def dfs(graph, start):
    vertexList, edgeList = graph
    visitedVertex = []
    stack = [start]
    adjacencyList = [[] for vertex in vertexList]
    for edge in edgeList:
        adjacencyList[edge[0]].append(edge[1])
    while stack:
        current = stack.pop()
        for neighbor in adjacencyList[current]:
            if not neighbor in visitedVertex:
                stack.append(neighbor)
        visitedVertex.append(current)
    return visitedVertex
print(dfs(graphs, 0))'''

#BFS
graph = {
    '5': ['3', '7'],
    '3': ['2', '4'],
    '7': ['8'],
    '2': [],
    '4': ['8'],
    '8': []
}
visited = []  # List for visited nodes.
queue = []  # Initialize a queue
def bfs(visited, graph, node):  # function for BFS
    visited.append(node)
    queue.append(node)


    while queue:  # Creating loop to visit each node
        m = queue.pop(0)
        print(m, end=" ")

        for neighbour in graph[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)
# Driver Code
print("Following is the Breadth-First Search")
bfs(visited, graph, '5')  # function calling

#bellman ford
'''class Graph:
    def __init__(self, vertices):
        self.M = vertices   # Total number of vertices in the graph
        self.graph = []     # Array of edges
    # Add edges
    def add_edge(self, a, b, c):
        self.graph.append([a, b, c])
    # Print the solution
    def print_solution(self, distance):
        print("Vertex Distance from Source")
        for k in range(self.M):
            print("{0}\t\t{1}".format(k, distance[k]))
    def bellman_ford(self, src):
        distance = [float("Inf")] * self.M
        distance[src] = 0
        for _ in range(self.M - 1):
            for a, b, c in self.graph:
                if distance[a] != float("Inf") and distance[a] + c < distance[b]:
                    distance[b] = distance[a] + c
        for a, b, c in self.graph:
            if distance[a] != float("Inf") and distance[a] + c < distance[b]:
                print("Graph contains negative weight cycle")
                return
        self.print_solution(distance)
g = Graph(5)
g.add_edge(0, 1, 2)
g.add_edge(0, 2, 4)
g.add_edge(1, 3, 2)
g.add_edge(2, 4, 3)
g.add_edge(2, 3, 4)
g.add_edge(4, 3, -5)



g.bellman_ford(0)'''