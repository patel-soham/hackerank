

/*Write the class AddElements here*/
template <class T>
class AddElements{
    public:
    T element;  
    
    AddElements(T element1){
        element=element1;
    } 
    T add(T element2){
        return element+element2;
    }
};

template <>
class AddElements<string>{
    public:
    string element;
    
    AddElements(string element1){
        element=element1;
    }
    string concatenate(string element2){
        return element+element2;
    }
};

