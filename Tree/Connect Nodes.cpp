


//Constant extra spcae 

//using bfs traversal check checking left and right for each node








Node* connect(Node *root) {

        Node *head = NULL; //head of the next level
        Node *prev = NULL; //the leading node on the next level
        Node * cur = root;  //current node of current level

        while (cur) {
            
            while (cur) { //iterate on the current level
                //left child
                if (cur->left) {
                    if (prev) {
                        prev->next = cur->left;
                    } else {
                        head = cur->left;
                    }
                    prev = cur->left;
                }
                //right child
                if (cur->right) {
                    if (prev) {
                        prev->next = cur->right;
                    } else {
                        head = cur->right;
                    }
                    prev = cur->right;
                }
                //move to next node
                cur = cur->next;
            }
            
            //move to next level
            cur = head;
            head = NULL;
            prev = NULL;
        }
     return root;
        
    }




