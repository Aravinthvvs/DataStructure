#include <iostream>
#include <pthread.h>
using namespace std;
static pthread_mutex_t lmutex;
void* addNum(void* a)
{
    pthread_mutex_lock(&lmutex);
    int in = *(int*)a;
    cout<<"\n output :: "<<in+5<<"\n";
    pthread_mutex_unlock(&lmutex);
    pthread_exit(NULL);
}


int main()
{
    pthread_t myThread[3];
    int ret;
    int num =1;
    for(int i=0;i<3;i++)
    {
        ret = pthread_create(&myThread[i],NULL,addNum,&num);
        if(ret!=0)
        {
            cout<<" Thread creation failed \n";
        }
    }
    for(int  i=0;i<3;i++)
    {
        void* status;
        pthread_join(myThread[i],&status);
        if(status != 0)
        {
            cout<<" Thread joined successfully \n";
        }
    }
    cout<<" out \n";
    pthread_exit(NULL);
}