from abc import ABC, abstractmethod

class Graph(ABC):
    @abstractmethod
    def add_node(self, node):
        pass

    @abstractmethod
    def add_edge(self, node1, node2):
        pass

    @abstractmethod
    def display(self):
        pass

class DirectedGraph(Graph):
    def __init__(self):
        self.graph = {}

    def add_node(self, node):
        if node not in self.graph:
            self.graph[node] = []

    def add_edge(self, node1, node2):
        if node1 in self.graph and node2 in self.graph:
            self.graph[node1].append(node2)

    def display(self):
        for node, edges in self.graph.items():
            print(f"{node} -> {', '.join(edges)}")

class UndirectedGraph(Graph):
    def __init__(self):
        self.graph = {}

    def add_node(self, node):
        if node not in self.graph:
            self.graph[node] = []

    def add_edge(self, node1, node2):
        if node1 in self.graph and node2 in self.graph:
            self.graph[node1].append(node2)
            self.graph[node2].append(node1)

    def display(self):
        for node, edges in self.graph.items():
            print(f"{node} -- {', '.join(edges)}")

# Create instances of DirectedGraph and UndirectedGraph
directed_graph = DirectedGraph()
directed_graph.add_node("A")
directed_graph.add_node("B")
directed_graph.add_edge("A", "B")
print("Directed Graph:")
directed_graph.display()

undirected_graph = UndirectedGraph()
undirected_graph.add_node("A")
undirected_graph.add_node("B")
undirected_graph.add_node("C")

undirected_graph.add_edge("A", "B")
undirected_graph.add_edge("A", "C")

print("\nUndirected Graph:")
undirected_graph.display()