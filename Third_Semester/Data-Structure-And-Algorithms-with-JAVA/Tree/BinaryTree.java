class Node {
    Node left, right;
    int key;

    Node(int data) {
        this.key = data;
        this.left = null;
        this.right = null;
    }
}

class BinaryTree {
    Node root;

    BinaryTree() {
        this.root = null;
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

    public void preorder(Node node) {
        if (node == null)
            return;

        System.out.print(node.key + ", ");
        preorder(node.left);
        preorder(node.right);
    }

    public void preorder() {
        preorder(root);
    }

    public void postorder(Node node) {
        if (node == null)
            return;

        postorder(node.left);
        postorder(node.right);
        System.out.print(node.key + ", ");
    }

    public void postorder() {
        postorder(root);
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.left.right = new Node(99);
        tree.root.left.left = new Node(4);
        tree.root.right = new Node(3);
        System.out.println("\nInorder traversal: ");
        tree.inorder();
        System.out.println("\nPreorder traversal: ");
        tree.preorder();
        System.out.println("\nPostorder traversal: ");
        tree.postorder();
    }
}