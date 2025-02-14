/*
 * Copyright 2021 Hewlett Packard Enterprise Development LP
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// This is included at the right time in the generated bison .h/.cpp
// It is split out into this separate file for easier maintenance.
// It contains any #includes necessary for the parser.

#include "chpl/queries/Context.h"
#include "chpl/queries/Location.h"
#include "chpl/queries/UniqueString.h"
#include "chpl/uast/ASTNode.h"
#include "chpl/uast/Block.h"
#include "chpl/uast/Builder.h"
#include "chpl/uast/Call.h"
#include "chpl/uast/Comment.h"
#include "chpl/uast/Dot.h"
#include "chpl/uast/ErroneousExpression.h"
#include "chpl/uast/Expression.h"
#include "chpl/uast/FnCall.h"
#include "chpl/uast/For.h"
#include "chpl/uast/Formal.h"
#include "chpl/uast/FormalDecl.h"
#include "chpl/uast/Function.h"
#include "chpl/uast/FunctionDecl.h"
#include "chpl/uast/Identifier.h"
#include "chpl/uast/Local.h"
#include "chpl/uast/Module.h"
#include "chpl/uast/ModuleDecl.h"
#include "chpl/uast/MultiDecl.h"
#include "chpl/uast/New.h"
#include "chpl/uast/OpCall.h"
#include "chpl/uast/Serial.h"
#include "chpl/uast/Sym.h"
#include "chpl/uast/SymDecl.h"
#include "chpl/uast/Variable.h"
#include "chpl/uast/VariableDecl.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <set>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace chpl;
using namespace uast;
using chpl::detail::PODUniqueString;

struct ParserError;
struct ParserComment;
