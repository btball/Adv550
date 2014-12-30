#ifndef ADV1_H
#define ADV1_H
#define GAME_NAME "Cgi550"
#define GAME_VERSION "99.99"
#define GAME_ID "cgi550.acd"
#define STYLE 1
#ifndef ADV01
#define ACDC_VERSION "12.26, 29 Dec 2014"
#if defined(MSDOS) || defined(_WIN32)
#  define CGINAME "_cgi550"
#else
#  define CGINAME ".cgi550"
#endif
#define DBNAME "cgi550.dat"
#define OBJSIZE 1
#define LOCSIZE 1
#define VARSIZE 1
#define FOBJ 3
#define LOBJ 91
#define FLOC 92
#define LLOC 335
#define FVERB 336
#define LVERB 443
#define FVAR 444
#define LVAR 487
#define FTEXT 487
#define LTEXT 923
#define NOISE 19
#define KNOT 66
#define VOCAB_SIZE 427
#define INHAND 335
#define HERE 444
#define THERE 445
#define STATUS 448
#define ARG1 446
#define ARG2 447
#define ARG3 486
#define SCHIZOID 3
#define JUGGLED 5
#define MOVED 0
#define PLSCLARIFY 4
#define ADVCONTEXT 483
#define SAY 336
#define BADWORD 9999
#define OBJ 15
#define LOC 13
#define VERB 14
#define FULL 3
#define BEENHERE 1
#define TERSE 2
#define BRIEF 1
#define DBSTATUS 0
#define LPROC 444
#define KEY(X) (value[446]==X || value[447]==X)
#define INIT_PROC p1
#define REPEAT_PROC p23
#endif
#define TEXT_BYTES 119854
#endif
