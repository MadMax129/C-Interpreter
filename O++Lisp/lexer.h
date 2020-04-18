enum Token {
	NIL=-1, INVALID, CON, IDENT, NUM, TDEFINE, TLIST,
 	TIK, TPRINT, TVAR, TIF, EQ, LESSTHAN, MORETHAN, PLUS, 
 	TIMPORT, TTRUE, TDECR, TINCR, TFALSE, MINUS, TIMES, 
 	DIVIDE, TSET, OPER, CPER, FEND
};

struct Scan {
	char* src;
	char lexeme[99];
	enum Token tok;
	long line;
	int paren_idx;
};

static inline bool ignore(char i);
static inline bool isletter(char i);
static inline bool isnum(char i);
void append(char *og, char c);
void append_string(char *original, char *add);
void preprocessor(struct Scan *s);
bool keyword(struct Scan *s);
enum Token singleChar(struct Scan *s);
void identifier(struct Scan *s);
void lex_num(struct Scan* s, bool neg);
int all_until(const char end, struct Scan *s);

void init_lex(struct Scan *s, char* source);
void next(struct Scan *d);
