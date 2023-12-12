
// Author: Muhammad Asad

// Design a C++ class for a bookstore inventory system. Define attributes for book title, author, ISBN, price, and quantity in stock. 
// Implement methods to update stock quantity and display book information.

#include<iostream>
#include<string>
using namespace std;
class BookStore{
	public:
		string book_title, book_author, book_isbn;
		float book_price;int book_qnt;
		void setter(){			
			cout<<"============== Enter Book Details ==============";
			cout<<"\nEnter Book's title: ";getline(cin,book_title);
			cout<<"\nEnter Book's author: ";getline(cin,book_author);
			cout<<"\nEnter Book's ISBN: ";getline(cin,book_isbn);		
			cout<<"\nEnter Book's price: ";cin>>book_price;
			cout<<"\nEnter Book's quantity: ";cin>>book_qnt;
		}
		void update(){
			int q;
			cout<<"============== Update Book Stock ==============";
			cout<<"\nEnter quantity to update: ";cin>>q;
			book_qnt+=q;
		}
		void display(){
			cout<<"============== Book Information ==============";
			cout<<"\nBook's title: "<<book_title;
			cout<<"\nBook's author: "<<book_author;
			cout<<"\nBook's ISBN: "<<book_isbn;			
			cout<<"\nBook's price: "<<book_price;
			cout<<"\nBook's quantity: "<<book_qnt;
		}
};
int main(){
	// code starts here
	BookStore b1;
	b1.setter();
	b1.update();
	b1.display();
	
return 0;
}

