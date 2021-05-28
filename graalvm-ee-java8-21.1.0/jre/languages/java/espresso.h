#ifndef __ESPRESSO_H
#define __ESPRESSO_H

#include <graal_isolate.h>


#if defined(__cplusplus)
extern "C" {
#endif

int Espresso_CreateJavaVM(graal_isolatethread_t* thread, struct JavaVM_** javaVMPointer, struct JNIEnv_** penv, JavaVMInitArgs* args);

int Espresso_EnterContext(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

int Espresso_LeaveContext(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

int Espresso_ReleaseContext(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

int Espresso_CloseContext(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

void Espresso_Exit(graal_isolatethread_t* thread, struct JavaVM_* javaVM);

void vmLocatorSymbol(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
