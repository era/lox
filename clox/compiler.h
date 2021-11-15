#ifndef clox_compiler_h
#define clox_compiler_h

#include "chunk.h"
#include "object.h"

bool compile(const char* source, Chunk* chunk);
static void statement();
static void declaration();

#endif