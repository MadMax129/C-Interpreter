/** @file compiler.h
 * 
 * @brief Opp Compiler
 *      
 * Copyright (c) 2021 Maks S
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
**/


#ifndef OPP_COMPILER
#define OPP_COMPILER

#include "../vm/vm.h"
#include "../vm/code.h"

struct Opp_Func {
	const char* name;
	Opcode* code;
};

struct Opp_Data {
	struct Opp_Value* val_pool;
	unsigned int len;
};

struct Opp_Compiler {
	struct Opp_Parser* parser;
};

struct Opp_Compiler* opp_new_compiler(struct Opp_Parser* parser);
void opp_start_compiler(struct Opp_Compiler* opp);

#endif /* OPP_COMPILER */