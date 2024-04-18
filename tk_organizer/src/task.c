/*
AUTHOR: IAGO GOUVEIA GURGEL
THIS IS A SOURCE FILE FOR A CODING PROJECT, EVERY LINE OF CODE PRODUCED
SHALL FOLLOW GNU CODING STANDARDS DEFINED IN
https://www.gnu.org/prep/standards/standards.html
*/

#include <stdlib.h>
#include <string.h>
#include "task.h"


// Task Status related functions
int solve_task(task_t * task){
	if ((DROPPED == task->status) || (SOLVED == task->status)){
		return EXIT_FAILURE;
	}
	task->status = SOLVED;
	return EXIT_SUCCESS;
}

int drop_task(task_t * task){
	if ((DROPPED == task->status) || (SOLVED == task->status)){
		return EXIT_FAILURE;
	}
	task->status = DROPPED;
	return EXIT_SUCCESS;
}

int activate_task(task_t * task){	
	if (ACTIVE == task->status){
		return EXIT_FAILURE;
	}
	task->status = ACTIVE;
	return EXIT_SUCCESS;
}

task_t * create_task(){	
	task_t * task = (task_t *) malloc(sizeof(task_t));
	if (task == NULL){
		return (task_t *) NULL;
	}
	while (set_identifier(task, new_identifier()) != EXIT_SUCCESS);
	while (set_metadata(task, get_metadata()) != EXIT_SUCCESS);
	return task;
}

int change_name(task_t * task, char * new_name){
	if (strlen(*new_name) > NAME_MAX_SIZE){
		return EXIT_FAILURE;
	}
	if (strncpy(task->name, *new_name, NAME_MAX_SIZE) == NULL){
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
} 	

int change_description(task_t * task, char * new_desc){
	if (strlen(*new_desc) > NAME_MAX_SIZE){
		return EXIT_FAILURE;
	}
	if (strncpy(task->description, *new_desc, DESCRIPTION_MAX_SIZE) == NULL){
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

int set_identifier(task_t * task, id_t * identifier){
	if (NULL == identifier){
		return EXIT_FAILURE; 
	}
	if (!is_unique(identifier)){
		return EXIT_FAILURE;	
	}
	task->identifier = *identifier;
	return EXIT_SUCCESS;
}

int set_metadata(task_t * task, metadata_t * metadata){
	if (NULL == metadata){
		return EXIT_FAILURE;
	}
	if (!is_valid(metadata)){
		return EXIT_FAILURE;
	}
	task->metadata = *metadata;
	return EXIT_SUCCESS;
}

int set_tags(task_t * task, tags_t * tags){
	if (NULL == tags){
		return EXIT_FAILURE;
	}	
	if ()
	return EXIT_SUCCESS
}




