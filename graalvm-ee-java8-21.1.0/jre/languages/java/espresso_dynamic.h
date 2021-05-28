#ifndef __ESPRESSO_H
#define __ESPRESSO_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef int (*Espresso_CreateJavaVM_fn_t)(graal_isolatethread_t* thread, struct JavaVM_** javaVMPointer, struct JNIEnv_** penv, JavaVMInitArgs* args);

typedef int (*Espresso_EnterContext_fn_t)(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

typedef int (*Espresso_LeaveContext_fn_t)(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

typedef int (*Espresso_ReleaseContext_fn_t)(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

typedef int (*Espresso_CloseContext_fn_t)(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

typedef void (*Espresso_Exit_fn_t)(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

typedef void (*vmLocatorSymbol_fn_t)(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
