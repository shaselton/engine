//
//  Debug.c
//  engine
//
//  Created by Scott Haselton on 11/19/12.
//  Copyright (c) 2012 California State Long Beach. All rights reserved.
//

#include <stdio.h>
#include "Debug.h"
#include "Constants.h"
#include "Configs.h"

void Debug( char * message ){
    
    switch( ENVIRONMENT ){
        case DEVELOPMENT:
            printf( "%s \n", message );
            break;
        case PRODUCTION:
            printf( "production" );
            break;
        case WARNINGS:
            printf( "warnings" );
            break;
    }
    
}