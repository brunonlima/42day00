// Repository.hpp
#ifndef REPOSITORY_HPP
#define REPOSITORY_HPP

#include <vector>

template <typename T>
class Repository {
public:
    static Repository* getInstance() {
        if (!instance) {
            instance = new Repository;
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
    Repository() {} 


    Repository(const Repository&);
    //Repository& operator=(const Repository&);

    static Repository* instance;
    std::vector<T*> objects;
};

template <typename T>
Repository<T>* Repository<T>::instance = 0;

#endif // REPOSITORY_HPP
