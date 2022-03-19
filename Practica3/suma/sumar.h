#include <rpc/rpc.h>
struct dupla_int {
int a;
int b;
};
#define SUMA_PROG ((rpc_uint)0x23451111)
#define SUMA_VERS ((rpc_uint)1)
#define SUMA ((rpc_uint)1)
extern bool_t xdr_dupla_int(XDR *, dupla_int *); /* boolean para verificar consistencia de la estructura */
extern int *suma_1(dupla_int *, CLIENT *); /* interface STUB del cliente */
extern int *suma_1_svc(dupla_int *, struct svc_req *); /* procedmiento remote del servidor */