#ifndef CONTRACT_FUNCTION_H_
#define CONTRACT_FUNCTION_H_

#include "./structs.h"

#ifdef __cplusplus
extern "C" {
#endif

int64_t fetch_contracted_graph(Edge *edges,int64_t *initial_num_vertices,
							int64_t *final_num_vertices,int64_t initial_num_edges,
							int64_t *final_num_edges,int64_t level,const char **graphName,
							const char **edgeString,const char **psuedoEString,
							const char **removedVString,const char **removedEString);


int64_t get_contracted_graph()


#ifdef __cplusplus
}
#endif

#endif 