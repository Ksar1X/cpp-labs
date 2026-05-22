#include <iostream>
#include <string>

class DataContainer {
private:
    int *data;
    int size;
    std::string *name;

public:

    ~DataContainer() {
        std::cout << "[Destructor] Delete: " << (name ? *name : "null") << "\n";
        delete[] data;
        delete name;
    }

    DataContainer(int s = 5, std::string n = "Default") : size(s) {
        data = new int[size];
        for(int i = 0; i < size; i ++) {data[i] = i * 10;}
        name = new std::string(n);
        std::cout << "[DataConteiner] - Default" << std::endl;
    }

    DataContainer(const DataContainer &other) {
        this->size = other.size;
        this->name = new std::string(*(other.name)); 
        this->data = new int[this->size]; 

        for(int i = 0; i < size; i++) {
            this->data[i] = other.data[i];
        }
        
        // this->size = other.size;
        // this->name = other.name; 
        // this->data = other.data;
        // std::cout << "[DataContainer] - Flat Copy (Unsafe)" << std::endl;

        std::cout << "[DataContainer] - Deep Copy (Safe)" << std::endl;
    }

    DataContainer& operator=(const DataContainer& other) {
        std::cout << "[DataConteiner] - Operator" << std::endl;

        if (this == &other) return *this;

        delete[] data;
        delete name;

        this->size = other.size;
        this->name = new std::string(*(other.name));
        this->data = new int[size];
        for(int i = 0; i < this->size; i++) this->data[i] = other.data[i];

        return *this;
    }

    friend std::ostream& operator<<(std::ostream& os, const DataContainer& obj) {
        os << "Obj: [" << *(obj.name) << "], size: " << obj.size << ", data: ";
        if (obj.data != nullptr) {
            for (int i = 0; i < obj.size; ++i) {
                os << obj.data[i] << " ";
            }
        } else {
            os << "empty";
        }
        return os;
    }

    int *getDataPointer() const { return data; }
};

int main() {
    std::cout << "\n\n";
    DataContainer p(3, "Original_P");
    
    // copy
    std::cout << "--- Test X z = p ---\n";
    DataContainer z = p;
    std::cout << "Adress array p: " << (void*)p.getDataPointer() << std::endl;
    std::cout << "Adress array z: " << (void*)z.getDataPointer() << std::endl;
    
    // operator
    std::cout << "\n--- Test m = p ---\n";
    DataContainer m(2, "Object_M");
    m = p;

    std::cout << "\n--- Object's data ---\n";
    std::cout << p << "\n";
    std::cout << z << "\n";
    std::cout << m << "\n\n";

    return 0;
}