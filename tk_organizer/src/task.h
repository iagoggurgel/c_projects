/*
AUTHOR: IAGO GOUVEIA GURGEL AND ZAÚ JÚLIO <zaujulio.dev@gmail.com>
THIS IS A SOURCE FILE FOR A CODING PROJECT, EVERY LINE OF CODE PRODUCED
SHALL FOLLOW GNU CODING STANDARDS DEFINED IN
https://www.gnu.org/prep/standards/standards.html
*/

#ifndef __TASK.H__
#define __TASK.H__

#include <types.h>


typedef struct
task {

	char * name;
	char * description;
	id_t id;
	metadata_t metadata;
	tags_t tags;
	uint8_t status;
	date_t deadline;
	links_t related_links;

} task_t;


