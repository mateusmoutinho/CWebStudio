#include "CWebStudio.h"
CwebNamespace cweb;

CwebHttpResponse *main_sever(CwebHttpRequest *request ){


    return cweb.response.send_text("Exemple of Return", 200);
    
}

int main(int argc, char *argv[]){
    cweb = newCwebNamespace();
    CwebServer server = newCwebSever(5000, main_sever);
    cweb.server.start(&server);
    return 0;
}