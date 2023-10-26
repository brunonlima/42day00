// Repository.hpp
#ifndef REPOSITORY_HPP
#define REPOSITORY_HPP

#include <vector>

template <typename T>
class Repository {
public:
    static Repository& getInstance() {
        if (!instance) {
            instance = new Repository;
        }
        return *instance;
    }

    void add(T object) {
        objects.push_back(object);
    }

    T access(typename std::vector<T>::size_type index) {
    if (index < objects.size()) {
        return objects[index];
    } else {
        // Trate o índice inválido de acordo com suas necessidades.
        // Aqui, retornaremos um valor padrão para indicar um erro.
        return T(); // Isso pode não ser adequado para todos os tipos T.
    }
}


    std::vector<T> retrieveAll() {
        return objects;
    }

private:
    Repository() {} // Construtor privado para evitar criação direta de instâncias.

    // Declarando a função de cópia e operador de atribuição como privados para impedir cópia.
    Repository(const Repository&);
    Repository& operator=(const Repository&);

    static Repository* instance;
    std::vector<T> objects;
};

template <typename T>
Repository<T>* Repository<T>::instance = NULL;

#endif // REPOSITORY_HPP
