//
//  fileio.c
//  engine
//
//  Created by Scott Haselton on 11/19/12.
//  Copyright (c) 2012 California State Long Beach. All rights reserved.
//

#include <stdio.h>
#include "fileio.h"
#include <errno.h>

extern int errno;

long fileio_openFile( const char* name ){
    
    Debug("\nopening file named: ");
    Debug(name);
    
    // File pointer in stdio.h. 
    FILE *fp;
    
    // variable to read character by character the contents of the file being opened.
    char ch;
    
    // just opening for reading purposes only
    fp = fopen( name, "r" );
    
    // error?
    if( fp == NULL ){
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file: %s\n", name);
        return -1;
    }
    
    // print out file contents for time being
    Debug("\nPrinting out contents:\n");
    while( ( ch = fgetc( fp ) ) != EOF ){
        printf("%c",ch);
    }
    
    fclose( fp );
    
   // printf("%s \n", name);
    return 2;
    
}