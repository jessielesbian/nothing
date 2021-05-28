#ifndef __NATIVE_IMAGE_DIAGNOSTICS_AGENT_H
#define __NATIVE_IMAGE_DIAGNOSTICS_AGENT_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef int (*Agent_OnLoad_fn_t)(struct JavaVM_* vm, char* options, void * reserved);

typedef int (*Agent_OnUnload_fn_t)(struct JavaVM_* vm);

typedef void (*JvmtiAgentBase__onVMStart__9b1e42dfe7b7a6e5e00077effc4f26e29ad97e90_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

typedef void (*JvmtiAgentBase__onVMInit__5460bcc0695e111a8026dc363695a1214ea161f9_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

typedef void (*JvmtiAgentBase__onVMDeath__a76c0237dced3f9c54abae5d2731c1ea9360f60d_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

typedef void (*JvmtiAgentBase__onThreadEnd__bf0b8cac17ea290878129d537f3fb954f30e565a_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

typedef void (*NativeImageDiagnosticsAgent__onClassPrepare__4313de71b071c102a5e2872f1b5a456669f1765f_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, void * clazz);

typedef void (*NativeImageDiagnosticsAgent__onBreakpoint__ac172f60de36f3f3028f5bcf75655a56d8a2b9e5_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, long long int location);

typedef void (*vmLocatorSymbol_fn_t)(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
