#include <iostream> using namespace std; struct nodeType{
int info; nodeType *link;
};
int main(){
nodeType *list, *ptr; list = new nodeType; list -> info = 21;
ptr = new nodeType; ptr -> info = 45;
ptr -> link = NULL; list -> link = ptr;
ptr = new nodeType; ptr -> info = 79;
ptr -> link = list -> link; list -> link = ptr;
cout << list -> info << " " << ptr -> info << " "; ptr = ptr -> link;
cout << ptr -> info << endl; return 0;
}