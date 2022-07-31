#pragma once 
// prerproccer command, processed before compiling
// pragma is instruction sent to preprocessor
// tells only include it once in a single translation unit (single cpp file

// declare fct, and include this header file in ur file
// it will copy this file everywhere

void log(const char* message); // declare a function
void Initlog();

// examle to explain pragma
struct Player {};

// instead of pragma when can do it in traditional way header gaurd
// it checks if the block is already defined, if it is defined
// it will not included it, if it is not defined it will included
#ifndef _LOG_H
#define _LOG_H
// put definition here
#endif // !_LOG_H
