// Singleton.hpp
#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <vector>

template <typename T>
class Singleton {
public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton;
        }
        return instance;
    }

    void add(T* object) {
        objects.push_back(object);
    }

    bool retrieve(typename std::vector<T*>::size_type index) {
    if (index < objects.size()) {
        objects.erase(objects.begin() + index); // Remove o objeto do vetor
        return true; // Retorna true para indicar sucesso
    } else {
        return false; // Retorna false para indicar falha
    }
}

    T* access(typename std::vector<T*>::size_type index) {
        if (index < objects.size()) {
            return objects[index];
        } else {
            return 0; 
        }
    }

    std::vector<T*> listAll() {
        return objects;
    }

private:
    Singleton() {} 


    Singleton(const Singleton&);
    //Singleton& operator=(const Singleton&);

    static Singleton* instance;
    std::vector<T*> objects;
};

template <typename T>
Singleton<T>* Singleton<T>::instance = 0;

#endif // Singleton_HPP
