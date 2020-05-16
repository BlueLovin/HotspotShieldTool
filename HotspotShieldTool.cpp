#include <iostream>
#include <chrono> 
#include <thread>

void StatusLoop();

int main(int argc, char* argv[]){
    if(argc == 1){
        system("cat HSSTool.txt");
        return 0;
    }

    char StatusArg {'s'};
    char* pStatusArg = &StatusArg;
    if(*argv[1] == *pStatusArg){
        std::cout<<"Success.\n";
         
        StatusLoop();
    }
    return 0;
}

void StatusLoop(){
    while(true){
        system("clear");
        system("hotspotshield status");

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}