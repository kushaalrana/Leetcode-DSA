void vector(){// vector maintains single linked list list maintains doubly linked list so do insert operation in List
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,3);

    vector<int> v(5,100);
    // o/p: {100,100,100,100,100}

    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>:: iterator it = v.end(); // do v.end()-1 to access the last element
    vector<int>:: iterator it = v.rend(); //reverse end no one uses
    vector<int>:: iterator it = v.rbegin(); //reverse begin no one uses
    vector<int>:: iterator it = v.at(); // similar to v[0]
    vector<int>:: iterator it = v.back();

    vector<int>:: iterator it = v.begin(); // it points to the address or the memory of the element which is first. 
    // to access the element we need to use *

    
    it ++; // this will increment in the address 
    cout<<*(it)<<""; // this will get the value present in that address


// printing
for(auto it:v){
    cout<<it;
}
for(auto it=v.begin(); it!=v.end();it++){
    cout<<*(it);
}

//Deletion
v.erase(v.begin()+1);
v.erase(v.begin()+1, v.begin()+4); // start and end to delete multiple elements.

vector<int> v(2,100); {100,100}
v.insert(v.begin(),300); //{300,100,100} insert in a vector is very costly.
v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

vector<int> copy(2,50);
v.size() how many elements 
v.pop_back();
v1.swap(v2);
v.clear(); //clears the enetire vector
v.empty() // true or false
}



