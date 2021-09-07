#ifndef DEEPPTR_H
#define DEEPPTR_H

template<class T>
class deepPtr {
private:
    T* d_Ptr;
public:
    deepPtr(T* = nullptr);//costruttore
    deepPtr(const deepPtr<T>&); //costruttre di copia profondo
    deepPtr& operator=(const deepPtr&); //assegnazione profonda
    ~deepPtr(); //distruttore

    //operatori
    T& operator*();
    T* operator->() const;

    bool operator==(const deepPtr&) const;
//    bool operator!=(const deepPtr&) const;
};
//deepPtr
template <class T>
deepPtr<T>::deepPtr(T* ptr) : d_Ptr(ptr) {}//costruttore

template <class T>//costruttore di copia profonda
deepPtr<T>::deepPtr(const deepPtr& dptr){
    if(dptr.d_Ptr != nullptr) d_Ptr=dptr.d_Ptr->clone();
    else d_Ptr=nullptr;
}

template <class T>//distruttore profondo
deepPtr<T>::~deepPtr() {
    if(d_Ptr) delete d_Ptr;
}
//operatori
template <class T>
deepPtr<T>& deepPtr<T>::operator=(const deepPtr& dptr) {
   if (this != &dptr) {
    if(d_Ptr) delete d_Ptr;
    d_Ptr = dptr.d_Ptr->clone();
    }
    return *this;
}

template <class T>
T& deepPtr<T>::operator*() {
    return *d_Ptr;
}

template <class T>
T* deepPtr<T>::operator->() const{
    return &d_Ptr;
}

template <class T>
bool deepPtr<T>::operator==(const deepPtr& dptr) const {
    //return *d_Ptr==*(dptr.d_Ptr);
    return d_Ptr == dptr.d_Ptr;
}

//template <class T>
//bool deepPtr<T>::operator!=(const deepPtr& dptr) const {
//      return *d_Ptr != *(dptr.d_Ptr);
//}
#endif  //DEEPPTR_H
