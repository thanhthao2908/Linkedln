#include <iostream>
#include <memory>

struct SimpleNote {
    int mItem = 0;
    std::shared_ptr<SimpleNote> myNext;
};

std::shared_ptr<SimpleNote> list;

void addElement(const int value) {
    auto cur = std::make_shared<SimpleNote>();
    cur->mItem = value;
    cur->myNext = list;

    list = cur;
}

void printList() {
    std::shared_ptr<SimpleNote> cur = list;

    while(cur) {
        std::cout << cur->mItem << std::endl;
        cur = cur->myNext;
    } 
}

int main() {

    addElement(12);
    addElement(22);
    addElement(342);
    addElement(145);

    printList();

    return 0;    
}