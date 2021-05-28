#ifndef __NATIVE_IMAGE_AGENT_H
#define __NATIVE_IMAGE_AGENT_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef long long int (*BreakpointInterceptor__nativeObjectFieldOffset__304148aa7a42eff73c6b55f216b7c40292c9ab35_fn_t)(struct JNIEnv_* jni, void * self, void * field);

typedef void (*BreakpointInterceptor__onBreakpoint__fececf33398ae2b4eec0c82a8a333d14aeb99e24_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, long long int location);

typedef void (*BreakpointInterceptor__onNativeMethodBind__06a1dab70d846206c85cb10512425669b6daed6a_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, void * address, void** newAddressPtr);

typedef void (*BreakpointInterceptor__onClassPrepare__6217c8401f479c631ca5ae7c0150e5a55e79ebf1_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, void * clazz);

typedef void * (*DefineClass_fn_t)(struct JNIEnv_* env, char* name, void * loader, char* buf, int bufLen);

typedef void * (*FindClass_fn_t)(struct JNIEnv_* env, char* name);

typedef struct _jmethodID* (*GetMethodID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef struct _jmethodID* (*GetStaticMethodID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef struct _jfieldID* (*GetFieldID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef struct _jfieldID* (*GetStaticFieldID_fn_t)(struct JNIEnv_* env, void * clazz, char* name, char* signature);

typedef int (*ThrowNew_fn_t)(struct JNIEnv_* env, void * clazz, char* message);

typedef struct _jmethodID* (*FromReflectedMethod_fn_t)(struct JNIEnv_* env, void * method);

typedef struct _jfieldID* (*FromReflectedField_fn_t)(struct JNIEnv_* env, void * field);

typedef void * (*ToReflectedMethod_fn_t)(struct JNIEnv_* env, void * clazz, struct _jmethodID* method, int isStatic);

typedef void * (*ToReflectedField_fn_t)(struct JNIEnv_* env, void * clazz, struct _jfieldID* field, int isStatic);

typedef void * (*NewObjectArray_fn_t)(struct JNIEnv_* env, int length, void * elementClass, void * initialElement);

typedef int (*Agent_OnLoad_fn_t)(struct JavaVM_* vm, char* options, void * reserved);

typedef int (*Agent_OnUnload_fn_t)(struct JavaVM_* vm);

typedef void (*JvmtiAgentBase__onVMStart__9b1e42dfe7b7a6e5e00077effc4f26e29ad97e90_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

typedef void (*JvmtiAgentBase__onVMInit__5460bcc0695e111a8026dc363695a1214ea161f9_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

typedef void (*JvmtiAgentBase__onVMDeath__a76c0237dced3f9c54abae5d2731c1ea9360f60d_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

typedef void (*JvmtiAgentBase__onThreadEnd__bf0b8cac17ea290878129d537f3fb954f30e565a_fn_t)(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

typedef void (*vmLocatorSymbol_fn_t)(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
