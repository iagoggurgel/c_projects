/*
AUTHOR: IAGO GOUVEIA GURGEL AND ZAÚ JÚLIO <zaujulio.dev@gmail.com>
THIS IS A SOURCE FILE FOR A CODING PROJECT, EVERY LINE OF CODE PRODUCED
SHALL FOLLOW GNU CODING STANDARDS DEFINED IN
https://www.gnu.org/prep/standards/standards.html
*/

#ifndef __TASK.H__
#define __TASK.H__

#include <stdint.h>

#define ACTIVE 0
#define SOLVED 1
#define DROPPED -1

#define NAME_MAX_SIZE 128
#define DESCRIPTION_MAX_SIZE 512

// Function signatures below

// Status
int solve_task(task_t *);
int activate_task(task_t *);
int drop_task(task_t *);

// Create
task_t * create_task();

// Update
int change_name(task_t *, char *);
int change_description(task_t *, char *);
int set_identifier(task_t *, id_t *);

typedef struct
task {

	char name[NAME_MAX_SIZE];
	char description[DESCRIPTION_MAX_SIZE];
	id_t identifier;
	metadata_t metadata;
	tags_t tags;
	uint8_t status;
	date_t deadline;
	links_t related_links;

} task_t;


