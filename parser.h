/* 
 * parser_Fall24.h
 * Building a Parser for Mini C-Like Language
 * Programming Assignment 2
 * Fall 2024
 */

#ifndef PARSE_H_
#define PARSE_H_

#include <iostream>
#include "lex_FALL24.h"

using namespace std;

// Function prototypes for parser functions
bool Prog(istream& in, int& line);
bool StmtList(istream& in, int& line);
bool Stmt(istream& in, int& line);
bool DeclStmt(istream& in, int& line);
bool VarList(istream& in, int& line);
bool ControlStmt(istream& in, int& line);
bool PrintStmt(istream& in, int& line);
bool CompStmt(istream& in, int& line);
bool IfStmt(istream& in, int& line);
bool AssignStmt(istream& in, int& line);
bool Var(istream& in, int& line);
bool ExprList(istream& in, int& line);
bool Expr(istream& in, int& line);
bool LogANDExpr(istream& in, int& line);
bool EqualExpr(istream& in, int& line);
bool RelExpr(istream& in, int& line);
bool AddExpr(istream& in, int& line);
bool MultExpr(istream& in, int& line);
bool UnaryExpr(istream& in, int& line);
bool PrimaryExpr(istream& in, int& line, int sign);

// Function to return the count of errors
int ErrCount();

#endif /* PARSE_H_ */
