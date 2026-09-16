#include<iostream>
using namespace std;

class HashTable{
    int table[10];

    public:
    HashTable(){
        for(int i=0;i<10;i++){
            table[i]=-1;        //empty
        }
    }

    void insert(int key){
        int index = key % 10;  // Hash Function

        while(table[index] != -1){
            index = (index + 1) % 10;
        }
        table[index] = key;

        cout<<key<<"inserted at "<<index<<endl;
    }

    void display() {

        cout << "Hash Table:\n";

        for(int i = 0; i < 10; i++) {

            cout << i << " --> ";

            if(table[i] == -1)
                cout << "Empty";
            else
                cout << table[i];

            cout << endl;
        }
    }
};

int main(){
    HashTable h;
    h.insert(10);
    h.insert(25);
    h.insert(65);

    h.display();
    return 0;

}