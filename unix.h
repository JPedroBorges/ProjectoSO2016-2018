//*****************************************************************
//			Sistemas Operativos		- Projecto 2016/2017
// (●̮̮̃•̃)		João Borges				-
// /█\		Nuno Rodrigues			-
// .Π.		Vitor Paixão			-
//*****************************************************************

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <math.h>
#include <semaphore.h>
#include <time.h>
#include <stdbool.h>
#include <netinet/in.h>
#include <netdb.h>

#define ADDRESS      "champ_socket"

#define UNIXSTR_PATH "/tmp/socket.unix.stream"
#define UNIXDG_PATH  "/tmp/socket.unix.datagram"
#define UNIXDG_TMP   "/tmp/socket.unix.dgXXXXXXX"

#define DEBUG debuging
#define CONFIGURATION_PARAMS_NUMBER 10
#define MAX_LINE 512

int static debuging=0;
/******************************* util *******************************/
char * make_hours();

/************************** util_simulador **************************/
int * read_method();

/*************************** util_monitor ***************************/
int write_log();
int write_report();
