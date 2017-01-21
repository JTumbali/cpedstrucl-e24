#include <iostream>
#include <conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
        
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

    void display(){
    		Node * n; 
			n = head;
    		 if(n == NULL){
    		 	cout << "Nothing to display";
			 }
			 else{
			 	while(n!= NULL){
    		cout<<n->x<<"\n";
			n = n->next;	}
			 }
			 getch();

	}
	
private:
    Node *head; 
};

void menu(){
		cout<< " MAIN MENU " << endl;
    	cout << "1. Push \n";
    	cout << "2. Pop \n";
    	cout << "3. Exit \n";
    	cout << "4. Display \n ";
	}

int main() {
    LinkedList list;
    int choice, n;
    
    while (1){
    	system("cls");
    	menu();
    	cout <<"Enter choice: ";
    	cin >> choice;
    	
    	switch (choice)
    	{
    		case 1: {
    			cout <<"Push a value: ";
    			cin>>n;
    			list.addValue(n);
				break;
			}
			case 2:{
				cout << list.popValue() << " has been popped! " << endl; 	
				getch();
				break;
			}
			case 3:{
				exit(1);
				break;
			}
			case 4:{
				list.display();
				cout << endl;
				system("pause");
				break;
			}
		}
	}

    list.addValue(5);
    list.addValue(10);
    list.addValue(20);

    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    cout << list.popValue() << endl;
    return 0;
}
