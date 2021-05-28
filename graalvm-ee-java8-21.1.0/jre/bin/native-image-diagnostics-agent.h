#ifndef __NATIVE_IMAGE_DIAGNOSTICS_AGENT_H
#define __NATIVE_IMAGE_DIAGNOSTICS_AGENT_H

#include <graal_isolate.h>


#if defined(__cplusplus)
extern "C" {
#endif

int Agent_OnLoad(struct JavaVM_* vm, char* options, void * reserved);

int Agent_OnUnload(struct JavaVM_* vm);

void JvmtiAgentBase__onVMStart__9b1e42dfe7b7a6e5e00077effc4f26e29ad97e90(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

void JvmtiAgentBase__onVMInit__5460bcc0695e111a8026dc363695a1214ea161f9(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

void JvmtiAgentBase__onVMDeath__a76c0237dced3f9c54abae5d2731c1ea9360f60d(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni);

void JvmtiAgentBase__onThreadEnd__bf0b8cac17ea290878129d537f3fb954f30e565a(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread);

void NativeImageDiagnosticsAgent__onClassPrepare__4313de71b071c102a5e2872f1b5a456669f1765f(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, void * clazz);

void NativeImageDiagnosticsAgent__onBreakpoint__ac172f60de36f3f3028f5bcf75655a56d8a2b9e5(struct _jvmtiEnv* jvmti, struct JNIEnv_* jni, void * thread, struct _jmethodID* method, long long int location);

void vmLocatorSymbol(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
