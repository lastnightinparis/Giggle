#ifndef GIGGLE_CLASSLOADER_H
#define GIGGLE_CLASSLOADER_H

#include <cstdio>
#include "types.h"

using namespace std;

/**
 * Class loader (.class)
 */

class ClassLoader {
public:
    static ClassLoader &getInstance() {
        static ClassLoader instance;
        return instance;
    }

    ClassFile *readClassFile(FILE *file);

    ~ClassLoader();

private:


};

#endif //GIGGLE_CLASSLOADER_H
