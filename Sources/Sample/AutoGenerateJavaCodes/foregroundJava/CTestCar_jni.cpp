
#include <jni.h>

//For Elastos
#include "Elastos.AutoGenerateJavaCodes.h"

//TODO : Need to Modify the java class path.
#define JNIREG_CLASS "elastos/org/xxx/CTestCarImpl"

jint JNICALL nativeInit0(
    /* [in] */ JNIEnv* env,
    /* [in] */ jobject jobj)
{
    JavaVM* vm;
    env->GetJavaVM(&vm);

    ICTestCarClassObject* pElaClsObj;
    ECode ec = CTestCar::New((Handle64)vm, (Handle64)jobj, &pElaClsObj);
    if(FAILED(ec)) return 0;

    return pElaClsObj;
}


static const JNINativeMethod gMethods[] = {
    {"nativeInit", "()I", (void*)nativeInit0},
    {"nativeDestroy", "(I)V", (void*)nativeDestroy},
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved){
    JNIEnv * env;
    jclass cls;
    if(vm->GetEnv((void **)&env,JNI_VERSION_1_6) != JNI_OK){
        return JNI_ERR;
    }
    assert(0 && "Please set your own JNIREG_CLASS. If done, delete this line.");

    cls = env->FindClass(JNIREG_CLASS);
    env->RegisterNatives(cls, gMethods, sizeof(gMethods)/sizeof(JNINativeMethod));
    return JNI_VERSION_1_6;
};