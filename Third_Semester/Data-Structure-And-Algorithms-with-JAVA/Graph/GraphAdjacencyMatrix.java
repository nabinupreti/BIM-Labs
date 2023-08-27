import java.util.Arrays;

public class GraphAdjacencyMatrix {
    private int[][] adjacencyMatrix;
    private int numVertices;

    public GraphAdjacencyMatrix(int numVertices) {
        this.numVertices = numVertices;
        adjacencyMatrix = new int[numVertices][numVertices];
    }

    public void addEdge(int source, int destination) {
        // Since this is an undirected graph, we need to update both cells in the
        // matrix.
        adjacencyMatrix[source][destination] = 1;
        adjacencyMatrix[destination][source] = 1;
    }

    public void removeEdge(int source, int destination) {
        // Since this is an undirected graph, we need to update both cells in the
        // matrix.
        adjacencyMatrix[source][destination] = 0;
        adjacencyMatrix[destination][source] = 0;
    }

    public void printGraph() {
        System.out.println("Graph Representation (Adjacency Matrix):");
        for (int i = 0; i < numVertices; i++) {
            System.out.println(Arrays.toString(adjacencyMatrix[i]));
        }
    }

    public static void main(String[] args) {
        int numVertices = 4;
        GraphAdjacencyMatrix graph = new GraphAdjacencyMatrix(numVertices);

        // Adding edges to the graph
        graph.addEdge(0, 0);
        graph.addEdge(0, 3);
        graph.addEdge(1, 2);
        graph.addEdge(1, 3);
        graph.addEdge(2, 3);

        graph.printGraph();

        System.out.println("After removing edge between vertex 0 and 1");
        graph.removeEdge(0, 1);

        graph.printGraph();
    }
}
