// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




 // } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        //code here
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        Node *temp = head;
        Node *dummyHead = new Node(INT_MIN);
        dummyHead->next = head;
        Node *prev = dummyHead;
        while(temp){
            Node *temp2 = dummyHead->next;//not head because head node is being shifted here and there
            Node *prev2 = dummyHead;
            while(temp2 != temp && temp2->data < temp->data){
                prev2 = temp2;
                temp2 = temp2->next;
            }
            if(temp2 == temp){
                //already in position
                prev = temp;
                temp = temp->next;
            }
            else{
                //delete at this position
                prev->next = prev->next->next;
                //insert temp node at temp2 position
                prev2->next = temp;//for deletion we need the previous node
                temp->next = temp2;
                //move pointer to next in loop
                temp = prev->next;
            }
        }
        return dummyHead->next;
    }
    
};

// { Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}  // } Driver Code Ends