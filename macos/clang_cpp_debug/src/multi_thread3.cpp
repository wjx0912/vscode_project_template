#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define  NUM_THREADS 5  

struct thread_data {
    int thread_id;
    char *message;
};

void * printHello(void *thread_arg) {
    struct thread_data *my_data;
    my_data = (struct thread_data *) thread_arg;
    cout<<"Thread ID:"<<my_data->thread_id<<endl;
    cout<<"Thread ID:"<<my_data->message<<endl;
    pthread_exit(NULL);
}

int main(int argc, char **argv)
{
  pthread_t threads[NUM_THREADS];
  struct thread_data td[NUM_THREADS];
  int rc,i;

    for(i=0;i<NUM_THREADS;i++){
        cout<<"main() creating thread, "<<i<<endl;
        td[i].thread_id = i;
        td[i].message = (char *)"This is meaages";
        rc = pthread_create(&threads[i],NULL, printHello,(void*)&(td[i]));
        if(rc){
            cout<<"Error:unable to create thread "<<rc<<endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}