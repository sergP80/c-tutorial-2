#pragma once
#include <stdlib.h>
typedef void* NODE_DATA;

typedef struct tagNode
{
    NODE_DATA data;
    struct tagNode* next;
} FORWARD_LIST, *P_FORWARD_LIST;

typedef void (*clean_data)(NODE_DATA);
typedef int (*forward_node_predicate)(NODE_DATA);

/**
 * Clean node list memory using clean function for each item
 * @param source node list
 * @param clean_data function to clean node data
 */
void clean(P_FORWARD_LIST source, clean_data clean_data);
/**
 * Added new item into list at the first
 * @param list list
 * @param data data for list
 * @return new added node
 */
P_FORWARD_LIST add_first(P_FORWARD_LIST list, NODE_DATA data);
/**
 * Added new item into list at the last
 * @param list list
 * @param data data for list
 * @return new added node
 */
P_FORWARD_LIST add_last(P_FORWARD_LIST list, NODE_DATA data);
/**
 * Add all items from source to dest as the first
 * @param dest - target list
 * @param source - source list
 * @return head of the target list
 */
P_FORWARD_LIST add_all_first(P_FORWARD_LIST dest, P_FORWARD_LIST source);
/**
 * Add all items from source to dest as the last
 * @param dest - target list
 * @param source - source list
 * @return head of the target list
 */
P_FORWARD_LIST add_all_last(P_FORWARD_LIST dest, P_FORWARD_LIST source);
/**
 * Remove first node which data is satisfied by the condition
 * @param source - list of nodes
 * @param pred - predicate
 * @return true if first node was deleted/false otherwise
 */
int remove_first_if(P_FORWARD_LIST source, forward_node_predicate pred);
/**
 * Remove last node which data is satisfied by the condition
 * @param source - list of nodes
 * @param pred - predicate
 * @return true if last node was deleted/false otherwise
 */
int remove_last_if(P_FORWARD_LIST source, forward_node_predicate pred);
/**
 * Remove all nodes which are satisfied by the condition
 * @param source - list of nodes
 * @param pred - predicate
 * @return count of deleted nodes
 */
int remove_all_if(P_FORWARD_LIST source, forward_node_predicate pred);
/**
 * Find first node which is satisfied to condtion
 * @param source node list
 * @return NULL if not found or node with the data
 */
P_FORWARD_LIST find_first_if(P_FORWARD_LIST source, forward_node_predicate);
/**
 * Find the last node which is satisfied to condition
 * @param source - node list
 * @param pred - predicate
 * @return NULL if not found or node with the data
 */
P_FORWARD_LIST find_last_if(P_FORWARD_LIST source, forward_node_predicate pred);
/**
 * Create new node list which contains nodes from the source which are satisfied to condtion
 * @param source - node list
 * @param pred - predicate
 * @return
 */
P_FORWARD_LIST find_all_if(P_FORWARD_LIST source, forward_node_predicate pred);