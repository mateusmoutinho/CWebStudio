#define CWEB_DEBUG
#include "CWebStudio.h"

struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request ){
   return cweb_send_text("Hello World",200);
    
}

int main(){

    for(int i=3000;i< 4000;i++){
            cweb_run_server(i,main_sever,CWEB_DEFAULT_TIMEOUT,CWEB_DANGEROUS_SINGLE_PROCESS);
    }
 
 
    return 0;
}