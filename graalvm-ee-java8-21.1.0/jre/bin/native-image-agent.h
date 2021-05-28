#ifndef __NATIVE_IMAGE_AGENT_H
#define __NATIVE_IMAGE_AGENT_H

#include <graal_isolate.h>


#if defined(__cplusplus)
extern "C" {
#endif

long long int BreakpointInterceptor__nativeObjectFieldOffset__304148aa7a42eff73c6b55f216b7c40292c9ab35(struct JNIEnv_* jni, void * self, void * field);

void BreakpointInterceptor__onBreakpoint__fececf33398ae2b4eec0c82a8a333d14aeb99e24(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, long long int location);

void BreakpointInterceptor__onNativeMethodBind__06a1dab70d846206c85cb10512425669b6daed6a(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, void * address, void** newAddressPtr);

void BreakpointInterceptor__onClassPrepare__6217c8401f479c631ca5ae7c0150e5a55e79ebf1(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, void * clazz);

void * DefineClass(struct JNIEnv_* env, char* name, void * loader, char* buf, int bufLen);

void * FindClass(struct JNIEnv_* env, char* name);

struct _jmethodID* GetMethodID(struct JNIEnv_* env, void * clazz, char* name, char* signature);

struct _jmethodID* GetStaticMethodID(struct JNIEnv_* env, void * clazz, char* name, char* signature);

struct _jfieldID* GetFieldID(struct JNIEnv_* env, void * clazz, char* name, char* signature);

struct _jfieldID* GetStaticFieldID(struct JNIEnv_* env, void * clazz, char* name, char* signature);

int ThrowNew(struct JNIEnv_* env, void * clazz, char* message);

struct _jmethodID* FromReflectedMethod(struct JNIEnv_* env, void * method);

struct _jfieldID* FromReflectedField(struct JNIEnv_* env, void * field);

void * ToReflectedMethod(struct JNIEnv_* env, void * clazz, struct _jmethodID* method, int isStatic);

void * ToReflectedField(struct JNIEnv_* env, void * clazz, struct _jfieldID* field, int isStatic);

void * NewObjectArray(struct JNIEnv_* env, int length, void * elementClass, void * initialElement);

int Agent_OnLoad(struct JavaVM_* vm, char* options, void * reserved);

int Agent_OnUnload(struct JavaVM_* vm);

void JvmtiAgentBase__onVMStart__9b1e42dfe7b7a6e5e00077effc4f26e29ad97e90(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

void JvmtiAgentBase__onVMInit__5460bcc0695e111a8026dc363695a1214ea161f9(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

void JvmtiAgentBase__onVMDeath__a76c0237dced3f9c54abae5d2731c1ea9360f60d(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

void JvmtiAgentBase__onThreadEnd__bf0b8cac17ea290878129d537f3fb954f30e565a(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

void vmLocatorSymbol(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
