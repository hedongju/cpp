/*
 * Main.cpp
 * Copyright (C) 2017 hedj <hedj@hedj-virtual-machine>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include "AdBankWorker.h" 
#include "Drawer.cpp" 
#include "Transfer.cpp" 
using namespace std;

void HowTo(AdBankWorker *bw){

    bw->DoSth(); 
}

int main(){
    AdBankWorker *tester = new Tester;
    HowTo(tester);
    delete tester;
    //��չAdBankWorker��Drawer����
    AdBankWorker *drawer = new Drawer;
    HowTo(drawer);
    delete drawer;
    //��չAdBankWorker��Transfer����
    AdBankWorker *transfer = new Transfer;
    HowTo(transfer);
    delete transfer;
    return 0;
}



