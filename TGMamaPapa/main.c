//
//  main.c
//  TGMamaPapa
//
//  Created by Tora on 2/18/15.
//  Copyright (c) 2015 Tora. All rights reserved.
//

#include <stdio.h>
#include "TGMamaPapa.h"
#include "TGMamaPapa_Test.h"

int main(int argc, const char * argv[]) {
    TGMamaPapa_Test();
    
    for (int index = 0; index < 1000; index++) {
        TGMamaPapa(index);
    }
    
    return 0;
}
