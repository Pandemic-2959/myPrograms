#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){

	//Declaration 
	//1.
	vector<int> v1;
	cout<<"size of v1 "<< v1.size()<<endl;

	//2.
	vector<int> v2(5,200);//v2(size,valOfEachElement)
	cout<<v2[3]<<endl;

	//3.
	int arr[5] ={1,2,3,4,5};
	vector<int> v3(arr,arr+5);
	cout<<v3[4]<<endl;

	//4.
	vector<int> v4(v3);
	cout<<v3[2]<<endl;

	//5.
	vector<int> v5(move(v4));//this type of declararion move all elements 
	//v4 in v5 and empty the vector v4

	//6. from initializer list
	auto il ={1,2,3,4,5};
	vector<int> v6(il);

	// some methods
	int *p;
	p = v6.data();//returns ptr to first element of vector
	cout<<"v6.at(3) "<<v6.at(3)<<endl;
	cout << "Last element of vector = " << v6.back() << endl;
	vector<int>::iterator ptr;
	ptr = v6.begin();//.begin returns a non-constant iterator
	//whereas cbegin returns a constant iterator pointing the beginning
	//similarly .end() Returns an iterator which points to past-the-end element in the vector container 
	// and .cend() return the constant one
	cout << "First element of vector = " << *ptr << endl;
	for(;ptr!=v6.end();ptr++){
		cout<<*ptr<<"  ";
	}
	cout<<endl;

	//reverse begin and end function
	// .crbegin() returns const iterator pointing to reverse beginning
	// .crend() returns const iterator pointing to reverse end
	//

	//capacity function
	vector<int> v; //capacity = 0
	v.push_back(5);//capacity = 1
	v.push_back(5);//capacity = 2
	v.push_back(5);//capacity = 4
	v.push_back(5);//capacity = 4
	v.push_back(5);//capacity = 8
	v.push_back(5);//capacity = 8
	v.push_back(5);//capacity = 8
	v.push_back(5);//capacity = 8
	v.push_back(5);//capacity = 16 and so on
	cout<<v.capacity()<<endl;

	v.clear();//clear vector v and sets the size to zero
	cout<<v.capacity()<<endl;// but capaity does not change it remain 16

	//to insert an element at a paricular index .emplace(position,value)
	v3.emplace(v3.begin()+2,9);
	vector<int>::iterator itr;
	for(itr =v3.begin();itr !=v3.end();itr++){
		cout<<*itr<<"  ";
	}
	cout<<endl;
	//.emplace_back(int) is used to insert an element at end

  	//.empty() returns bool value based on vector is empt or not
  	










	return 0;
}