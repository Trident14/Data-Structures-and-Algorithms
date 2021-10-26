template<typename T>
class vector{
    //Data member
    T *arr;
    int cs;
    int ms;
    public:
    vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr=new T[ms];
    }
    void push_back(T d){
        if(cs==ms){
            //creat new array and delete old one
            T *oldArr=arr;
            ms=2*ms;
            arr=new T[ms];

            for(int i=0;i<cs;i++){
                arr[i]=oldArr[i];
            }
            // delete;
            delete [] oldArr;
        }
        arr[cs]=d;
        cs++; 
    }

    void pop_back(){
        if(cs>=0){
        cs--;
        }
    }
    bool isEmpty(){
        return cs==0;
    }

    //Front, back,end
    T front() const{
        return arr[0];
    }

    T back()const{
        return cs-1;
    }
    T at(int i)const{
        return arr[i];
    }
    T operator [](const int i){  //operator overloading
        return arr[i];
    }
    T size() const{
        return cs;
    }
    T capacity(){
        return ms;
    }
    //const which does not modifiy any datay menmber
};