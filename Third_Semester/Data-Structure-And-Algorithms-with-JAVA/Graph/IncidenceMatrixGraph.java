import java.util.Arrays;

public class IncidenceMatrixGraph {
    private int[][] incidenceMatrix;
    private int numVertices;
    private int numEdges;

    public IncidenceMatrixGraph(int numVertices, int numEdges) {
        this.numVertices = numVertices;
        this.numEdges = numEdges;
        this.incidenceMatrix = new int[numVertices][numEdges];
    }

    // Add an edge between vertex v and edge e
    public void addEdge(int vertex, int edge) {
        incidenceMatrix[vertex][edge] = 1;
    }

    // Remove an edge between vertex v and edge e
    public void removeEdge(int vertex, int edge) {
        incidenceMatrix[vertex][edge] = 0;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < numVertices; i++) {
            sb.append("Vertex ").append(i).append(": ");
            for (int j = 0; j < numEdges; j++) {
                sb.append(incidenceMatrix[i][j]).append(" ");
            }
            sb.append("\n");
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        int numVertices = 4;
        int numEdges = 5;
        IncidenceMatrixGraph graph = new IncidenceMatrixGraph(numVertices, numEdges);

        graph.addEdge(0, 4);
        graph.addEdge(0, 3);
        graph.addEdge(1, 1);
        graph.addEdge(2, 1);
        graph.addEdge(2, 2);
        graph.addEdge(3, 2);
        graph.addEdge(3, 3);
        graph.addEdge(2, 4);
        graph.addEdge(1, 0);
        graph.addEdge(3, 0);

        System.out.println("Incidence Matrix:");
        System.out.println(graph.toString());
    }
}

