#include <iostream>
#include <pthread.h>

using namespace std;

void *thread(void *arg){
    cout<< "Hello, I want say you: " << endl;
    return NULL;
}

int main() {
    pthread_t id;

    pthread_create(&id, NULL, thread, NULL);

    pthread_join(id , NULL);

    cout<< "Main thread" << endl;

    return 0;
}