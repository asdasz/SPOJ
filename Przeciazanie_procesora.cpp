//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#include <fstream>
//using namespace std;
//
//const int MAXN = 30; // Liczba węzłów
//
//// Typ węzłów drzewa RBT
//
//struct RBTNode
//{
//    RBTNode* up;
//    RBTNode* left;
//    RBTNode* right;
//    int key;
//    char color;
//};
//
//// Definicja typu obiektowego TRBTree
//class TRBTree
//{
//public:
//    RBTNode S;             // Węzeł strażnika
//    RBTNode* root;        // Korzeń drzewa czerwono-czarnego
//    string cr, cl, cp;     // Łańcuchy do znaków ramek
//
//    void printRBT(string sp, string sn, RBTNode* p); // Wypisuje drzewo
//
//public:
//    TRBTree();             // Konstruktor klasy
//    ~TRBTree();            // Destruktor klasy
//    void DFSRelease(RBTNode* p); // Usuwa rekurencyjnie drzewo
//    void print();          // Wypisuje drzewo
//    RBTNode* findRBT(int k); // Wyszukuje węzeł o kluczu k
//    RBTNode* minRBT(RBTNode* p); // Wyszukuje najmniejszy węzeł w p
//    RBTNode* succRBT(RBTNode* p);// Wyszukuje następnik p
//    void rot_L(RBTNode* A); // Rotacja w lewo względem A
//    void rot_R(RBTNode* A); // Rotacja w prawo względem A
//    void insertRBT(int k);   // Wstawia węzeł o kluczu k
//    void removeRBT(RBTNode* X); // Usuwa węzeł X
//    void max();
//};
//
//// Konstruktor drzewa
////-------------------
//TRBTree::TRBTree()
//{
//    cr = cl = cp = "  ";
//    cr[0] = 218; cr[1] = 196;
//    cl[0] = 192; cl[1] = 196;
//    cp[0] = 179;
//    S.color = 'B';             // Inicjujemy strażnika
//    S.up = &S;
//    S.left = &S;
//    S.right = &S;
//    root = &S;              // Korzeń wskazuje strażnika
//}
//
//// Destruktor drzewa
////------------------
//TRBTree::~TRBTree()
//{
//    DFSRelease(root);       // Rekurencyjnie usuwamy węzły
//}
//
//// Usuwa rekurencyjnie drzewo czerwono-czarne
////-------------------------------------------
//void TRBTree::DFSRelease(RBTNode* p)
//{
//    if (p != &S)
//    {
//        DFSRelease(p->left);  // usuwamy lewe poddrzewo
//        DFSRelease(p->right); // usuwamy prawe poddrzewo
//        delete p;                // usuwamy sam węzeł
//    }
//}
//
//// Wypisuje zawartość drzewa
////--------------------------
//void TRBTree::printRBT(string sp, string sn, RBTNode* p)
//{
//    string t;
//
//    if (p != &S)
//    {
//        t = sp;
//        if (sn == cr) t[t.length() - 2] = ' ';
//        printRBT(t + cp, cr, p->right);
//
//        t = t.substr(0, sp.length() - 2);
//        cout << t << sn << p->color << ":" << p->key << endl;
//
//        t = sp;
//        if (sn == cl) t[t.length() - 2] = ' ';
//        printRBT(t + cp, cl, p->left);
//    }
//}
//
//// Wypisuje zawartość drzewa
////--------------------------
//void TRBTree::print()
//{
//    printRBT("", "", root);
//}
//
//// Wyszukuje węzeł o kluczu k
//// Jeśli węzeł nie zostanie znaleziony, to zwraca
//// wskazanie puste NULL
////-----------------------------------------------
//RBTNode* TRBTree::findRBT(int k)
//{
//    RBTNode* p;
//
//    p = root;
//    while ((p != &S) && (p->key != k))
//        if (k < p->key) p = p->left;
//        else           p = p->right;
//    if (p == &S) return NULL;
//    return p;
//}
//
//// Wyszukuje najmniejszy węzeł w poddrzewie
//// o korzeniu p
////-----------------------------------------
//RBTNode* TRBTree::minRBT(RBTNode* p)
//{
//    if (p != &S)
//        while (p->left != &S) p = p->left;
//    return p;
//}
//
//void TRBTree::max()
//{
//    RBTNode* p = root;
//    while (p->right->key != NULL)
//        p = p->right;
//    cout << p->key << endl;
//}
//
//// Zwraca następnik p
////-------------------
//RBTNode* TRBTree::succRBT(RBTNode* p)
//{
//    RBTNode* r;
//
//    if (p != &S)
//    {
//        if (p->right != &S) return minRBT(p->right);
//        else
//        {
//            r = p->up;
//            while ((r != &S) && (p == r->right))
//            {
//                p = r;
//                r = r->up;
//            }
//            return r;
//        }
//    }
//    return &S;
//}
//
//// Wykonuje rotację w lewo względem A
////-----------------------------------
//void TRBTree::rot_L(RBTNode* A)
//{
//    RBTNode* B, * p;
//
//    B = A->right;
//    if (B != &S)
//    {
//        p = A->up;
//        A->right = B->left;
//        if (A->right != &S) A->right->up = A;
//
//        B->left = A;
//        B->up = p;
//        A->up = B;
//
//        if (p != &S)
//        {
//            if (p->left == A) p->left = B; else p->right = B;
//        }
//        else root = B;
//    }
//}
//
//// Wykonuje rotację w prawo względem A
////------------------------------------
//void TRBTree::rot_R(RBTNode* A)
//{
//    RBTNode* B, * p;
//
//    B = A->left;
//    if (B != &S)
//    {
//        p = A->up;
//        A->left = B->right;
//        if (A->left != &S) A->left->up = A;
//
//        B->right = A;
//        B->up = p;
//        A->up = B;
//
//        if (p != &S)
//        {
//            if (p->left == A) p->left = B; else p->right = B;
//        }
//        else root = B;
//    }
//}
//
//// Wstawia do drzewa węzeł o kluczu k
////-----------------------------------
//void TRBTree::insertRBT(int k)
//{
//    RBTNode* X, * Y;
//
//    X = new RBTNode;        // Tworzymy nowy węzeł
//    X->left = &S;          // Inicjujemy pola
//    X->right = &S;
//    X->up = root;
//    X->key = k;
//    if (X->up == &S) root = X; // X staje się korzeniem
//    else
//        while (true)           // Szukamy liścia do zastąpienia przez X
//        {
//            if (k < X->up->key)
//            {
//                if (X->up->left == &S)
//                {
//                    X->up->left = X;  // X zastępuje lewy liść
//                    break;
//                }
//                X->up = X->up->left;
//            }
//            else
//            {
//                if (X->up->right == &S)
//                {
//                    X->up->right = X; // X zastępuje prawy liść
//                    break;
//                }
//                X->up = X->up->right;
//            }
//        }
//    X->color = 'R';         // Węzeł kolorujemy na czerwono
//    while ((X != root) && (X->up->color == 'R'))
//    {
//        if (X->up == X->up->up->left)
//        {
//            Y = X->up->up->right; // Y -> wujek X
//
//            if (Y->color == 'R') // Przypadek 1
//            {
//                X->up->color = 'B';
//                Y->color = 'B';
//                X->up->up->color = 'R';
//                X = X->up->up;
//                continue;
//            }
//
//            if (X == X->up->right) // Przypadek 2
//            {
//                X = X->up;
//                rot_L(X);
//            }
//
//            X->up->color = 'B'; // Przypadek 3
//            X->up->up->color = 'R';
//            rot_R(X->up->up);
//            break;
//        }
//        else
//        {                  // Przypadki lustrzane
//            Y = X->up->up->left;
//
//            if (Y->color == 'R') // Przypadek 1
//            {
//                X->up->color = 'B';
//                Y->color = 'B';
//                X->up->up->color = 'R';
//                X = X->up->up;
//                continue;
//            }
//
//            if (X == X->up->left) // Przypadek 2
//            {
//                X = X->up;
//                rot_R(X);
//            }
//
//            X->up->color = 'B'; // Przypadek 3
//            X->up->up->color = 'R';
//            rot_L(X->up->up);
//            break;
//        }
//    }
//    root->color = 'B';
//}
//
//// Usuwa z drzewa węzeł X
////-----------------------
//void TRBTree::removeRBT(RBTNode* X)
//{
//    RBTNode* W, * Y, * Z;
//
//    if ((X->left == &S) || (X->right == &S)) Y = X;
//    else Y = succRBT(X);
//
//    if (Y->left != &S) Z = Y->left;
//    else Z = Y->right;
//
//    Z->up = Y->up;
//
//    if (Y->up == &S) root = Z;
//    else if (Y == Y->up->left) Y->up->left = Z;
//    else Y->up->right = Z;
//
//    if (Y != X) X->key = Y->key;
//
//    if (Y->color == 'B')   // Naprawa struktury drzewa czerwono-czarnego
//        while ((Z != root) && (Z->color == 'B'))
//            if (Z == Z->up->left)
//            {
//                W = Z->up->right;
//
//                if (W->color == 'R')
//                {              // Przypadek 1
//                    W->color = 'B';
//                    Z->up->color = 'R';
//                    rot_L(Z->up);
//                    W = Z->up->right;
//                }
//
//                if ((W->left->color == 'B') && (W->right->color == 'B'))
//                {              // Przypadek 2
//                    W->color = 'R';
//                    Z = Z->up;
//                    continue;
//                }
//
//                if (W->right->color == 'B')
//                {              // Przypadek 3
//                    W->left->color = 'B';
//                    W->color = 'R';
//                    rot_R(W);
//                    W = Z->up->right;
//                }
//
//                W->color = Z->up->color; // Przypadek 4
//                Z->up->color = 'B';
//                W->right->color = 'B';
//                rot_L(Z->up);
//                Z = root;      // To spowoduje zakończenie pętli
//            }
//            else
//            {                // Przypadki lustrzane
//                W = Z->up->left;
//
//                if (W->color == 'R')
//                {              // Przypadek 1
//                    W->color = 'B';
//                    Z->up->color = 'R';
//                    rot_R(Z->up);
//                    W = Z->up->left;
//                }
//
//                if ((W->left->color == 'B') && (W->right->color == 'B'))
//                {              // Przypadek 2
//                    W->color = 'R';
//                    Z = Z->up;
//                    continue;
//                }
//
//                if (W->left->color == 'B')
//                {              // Przypadek 3
//                    W->right->color = 'B';
//                    W->color = 'R';
//                    rot_L(W);
//                    W = Z->up->left;
//                }
//
//                W->color = Z->up->color;  // Przypadek 4
//                Z->up->color = 'B';
//                W->left->color = 'B';
//                rot_R(Z->up);
//                Z = root;      // To spowoduje zakończenie pętli
//            }
//
//    Z->color = 'B';
//
//    delete Y;
//}






//int main()
//{
//    TRBTree* obj;
//    obj = new TRBTree;
//    int ile;
//    cin >> ile;
//    int* tab = new int[ile];
//    int i = 0;
//
//    int q;
//    for(int r = 0; r<ile; r++)
//    {
//        cin >> q;
//        obj->insertRBT(q);
//        tab[i] = q;
//        i++;
//    }
//    obj->max();
//    int counter = 0;
//
//    while (cin >> q)
//    {
//        counter %= ile;
//        obj->removeRBT(obj->findRBT(tab[counter]));
//        obj->insertRBT(q);
//        obj->max();        
//        tab[counter] = q;
//        counter++;
//    }
//
//    return 0;
//}

// Binary Search Tree operations in C++

#include <iostream>
using namespace std;

struct node {
    int key;
    struct node* left, * right;
};

// Create a node
struct node* newNode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Inorder Traversal
void inorder(struct node* root) {
    if (root != NULL) {
        // Traverse left
        inorder(root->left);

        // Traverse root
        cout << root->key << " -> ";

        // Traverse right
        inorder(root->right);
    }
}

void m(struct node* root) {
    while (root->right != NULL)
        root = root->right;
    cout << root->key << endl;
}
// Insert a node
struct node* insert(struct node* node, int key) {
    // Return a new node if the tree is empty
    if (node == NULL) return newNode(key);

    // Traverse to the right place and insert the node
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

// Find the inorder successor
struct node* minValueNode(struct node* node) {
    struct node* current = node;

    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

// Deleting a node
struct node* deleteNode(struct node* root, int key) {
    // Return if the tree is empty
    if (root == NULL) return root;

    // Find the node to be deleted
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        // If the node is with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // If the node has two children
        struct node* temp = minValueNode(root->right);

        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

// Driver code
int main() {
    struct node* root = NULL;
    //root = insert(root, 8);
    //root = insert(root, 3);
    //root = insert(root, 1);
    //root = insert(root, 6);
    //root = insert(root, 7);
    //root = insert(root, 10);
    //root = insert(root, 14);
    //root = insert(root, 4);

    //cout << "Inorder traversal: ";
    //inorder(root);

    //cout << "\nAfter deleting 10\n";
    //root = deleteNode(root, 10);
    //cout << "Inorder traversal: ";
    //inorder(root);
    int ile;
    cin >> ile;
    int* tab = new int[ile];
    int i = 0;

    int q;
    for (int r = 0; r < ile; r++)
    {
        cin >> q;
        root = insert(root, q);
        tab[i] = q;
        i++;
    }
    m(root);
    int counter = 0;

    while (cin >> q)
    {
        counter %= ile;
        root = deleteNode(root, tab[counter]);
        root = insert(root, q);
        m(root);
        tab[counter] = q;
        counter++;
    }

    return 0;
}

//int main()
//{
//    TRBTree* obj;
//    obj = new TRBTree;
//    int ile;
//    cin >> ile;
//    int* tab = new int[ile];
//    int i = 0;
//
//    int q;
//    for (int r = 0; r < ile; r++)
//    {
//        cin >> q;
//        obj->insertRBT(q);
//        tab[i] = q;
//        i++;
//    }
//    obj->max();
//    int counter = 0;
//
//    while (cin >> q)
//    {
//        counter %= ile;
//        obj->removeRBT(obj->findRBT(tab[counter]));
//        obj->insertRBT(q);
//        obj->max();
//        tab[counter] = q;
//        counter++;
//    }
//
//    return 0;
//}