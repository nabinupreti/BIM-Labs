public class BST {
    class Node {
        Node left, right;
        int key;

        Node(int data) {
            this.key = data;
            left = right = null;
        }
    }

    Node root;

    BST() {
        this.root = null;
    }

    public void insert(int key) {
        root = insertKey(root, key);
    }

    public Node insertKey(Node root, int key) {
        if (root == null) {
            root = new Node(key);
            return root;
        }
        if (key < root.key) {
            root.left = insertKey(root.left, key);
        } else if (key > root.key) {
            root.right = insertKey(root.right, key);
        }
        return root;
    }

    public void inorder(Node node) {
        if (node == null) {
            return;
        } else {
            inorder(node.left);
            System.out.print(node.key + ",");
            inorder(node.right);
        }
    }

    public void inorder() {
        inorder(root);
    }

    public static void main(String[] args) {
        BST tree = new BST();
        tree.insert(8);
        tree.insert(3);
        tree.insert(9);
        tree.insert(22);
        tree.insert(1);
        tree.insert(4);
        tree.insert(2);

        System.out.println("Inorder traversal:");
        tree.inorder();
    }
}
