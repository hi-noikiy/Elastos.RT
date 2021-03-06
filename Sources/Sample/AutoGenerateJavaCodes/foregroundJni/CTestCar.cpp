
#include "CTestCar.h"

CAR_OBJECT_IMPL(CTestCar)
CAR_INTERFACE_IMPL(CTestCar, Object, ITestCar, IJavaInterface);

ECode CTestCar::SetInt(
    /* [in] */ Int32 value)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "SetInt", "(I)V");
    env->CallVoidMethod(jobj, method, value);
    Detach();
    return NOERROR;
}

ECode CTestCar::GetInt(
    /* [out] */ Int32 * value)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "GetInt", "()I");
    *value = (Int32)env->CallIntMethod(jobj, method);
    Detach();
    return NOERROR;
}

ECode CTestCar::SetString(
    /* [in] */ const String& value)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "SetString", "(Ljava/lang/String;)V");
    jstring _jstr1 = env->NewStringUTF(value.string());
    env->CallVoidMethod(jobj, method, _jstr1);
    Detach();
    return NOERROR;
}

ECode CTestCar::GetString(
    /* [out] */ String * value)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "GetString", "()Ljava/lang/String;");
    jstring _jstr = (jstring)env->CallObjectMethod(jobj, method);
    const char* __str = env->GetStringUTFChars(_jstr, NULL);
    *value = String(__str);
    env->ReleaseStringUTFChars(_jstr, __str);
    Detach();
    return NOERROR;
}

ECode CTestCar::Normal()
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "Normal", "()V");
    env->CallVoidMethod(jobj, method);
    Detach();
    return NOERROR;
}

ECode CTestCar::Test1(
    /* [in] */ Int32 value1,
    /* [in] */ Boolean value2,
    /* [in] */ Float value3,
    /* [in] */ Double value4,
    /* [in] */ Int64 value5,
    /* [in] */ Byte value6,
    /* [in] */ Char32 value7,
    /* [in] */ const String& value8)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "Test1", "(IZFDJBCLjava/lang/String;)V");
    jstring _jstr8 = env->NewStringUTF(value8.string());
    env->CallVoidMethod(jobj, method, value1, value2, value3, value4, value5, value6, value7, _jstr8);
    Detach();
    return NOERROR;
}

ECode CTestCar::Test2(
    /* [in] */ Int32 value1,
    /* [in] */ Boolean value2,
    /* [in] */ Float value3,
    /* [in] */ Double value4,
    /* [in] */ Int64 value5,
    /* [in] */ Byte value6,
    /* [in] */ Char32 value7,
    /* [in] */ const String& value8,
    /* [in] */ const String& value9,
    /* [in] */ const String& value10,
    /* [out] */ Int32 * result)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);
    jmethodID method = env->GetMethodID(cls, "Test2", "(IZFDJBCLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)I");
    jstring _jstr8 = env->NewStringUTF(value8.string());
    jstring _jstr9 = env->NewStringUTF(value9.string());
    jstring _jstr10 = env->NewStringUTF(value10.string());
    *result = (Int32)env->CallIntMethod(jobj, method, value1, value2, value3, value4, value5, value6, value7, _jstr8, _jstr9, _jstr10);
    Detach();
    return NOERROR;
}

ECode CTestCar::Test7(
    /* [in] */ IHelloCar * animal)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);

    //TODO: please fix the package name of the interface.
    assert(0);
    jmethodID method = env->GetMethodID(cls, "Test7", "(Lorg/elastos/xxx/IHelloCar;)V");
    Handle64 _jobj1;
    mJavaCarManager->GetJavaObject(animal, &_jobj1);
    env->CallVoidMethod(jobj, method, (jobject)_jobj1);
    Detach();
    return NOERROR;
}

ECode CTestCar::Test8(
    /* [out] */ IHelloCar ** animal)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);

    //TODO: please fix the package name of the interface.
    assert(0);
    jmethodID method = env->GetMethodID(cls, "Test8", "()Lorg/elastos/xxx/IHelloCar;");
    jobject _jobj = env->CallObjectMethod(jobj, method);
    IInterface* _carobj = NULL;
    jclass _jclazz = env->GetObjectClass(_jobj);
    jmethodID _jmethodID = env->GetMethodID(_jclazz, "getClassId", "()Ljava/lang/String;");
    jstring _jclsId = (jstring)env->CallObjectMethod(_jobj, _jmethodID);
    const char* _jclsIdStr = env->GetStringUTFChars(_jclsId, nullptr);
    mJavaCarManager->GetCarObject(String(_jclsIdStr), &_carobj);
    env->ReleaseStringUTFChars(_jclsId, _jclsIdStr);

    if (_carobj) {
        *animal = IHelloCar::Probe(_carobj);
        (*animal)->AddRef();
    }
    Detach();
    return NOERROR;
}

ECode CTestCar::Test9(
    /* [in] */ const ArrayOf<ICarrier *> & carriers)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);

    //TODO: please fix the package name of the interface.
    assert(0);
    jmethodID method = env->GetMethodID(cls, "Test9", "([Lorg/elastos/xxx/ICarrier;)V");

    //TODO: please fix the package name of the interface.
    assert(0);
    jclass _clazz1 = env->FindClass("org/elastos/xxx/ICarrier");
    jobjectArray _jarray1 = env->NewObjectArray(carriers.GetLength(), _clazz1, NULL);
    if (_jarray1 == NULL) {
        Detach();
        return E_OUT_OF_MEMORY;
    }

    for (Int32 i = 0; i < carriers.GetLength(); i++) {
        Handle64 _jobj;
        mJavaCarManager->GetJavaObject(carriers[i], &_jobj);
        env->SetObjectArrayElement(_jarray1, i, (jobject)_jobj);
    }

    env->CallVoidMethod(jobj, method, _jarray1);
    Detach();
    return NOERROR;
}

ECode CTestCar::Test10(
    /* [out, callee] */ ArrayOf<ICarrier *> ** carriers)
{
    JNIEnv* env = GetEnv();
    Handle64 javaObj;
    mJavaCarManager->GetJavaObject(ITestCar::Probe(this), &javaObj);
    jobject jobj = (jobject)javaObj;
    jclass cls = env->GetObjectClass(jobj);

    //TODO: please fix the package name of the interface.
    assert(0);
    jmethodID method = env->GetMethodID(cls, "Test10", "()[Lorg/elastos/xxx/ICarrier;");
    jobjectArray _jarray = (jobjectArray)env->CallObjectMethod(jobj, method);
    int _len = env->GetArrayLength(_jarray);
    AutoPtr<ArrayOf<ICarrier *> > _array = ArrayOf<ICarrier *>::Alloc(_len);
    if (!_array) {
        Detach();
        return E_OUT_OF_MEMORY;
    }

    
    for (Int32 i = 0; i < _len; i++) {
        jobject _item = env->GetObjectArrayElement(_jarray, i);
        IInterface* _carobj = NULL;
        jclass _jclazz = env->GetObjectClass(_item);
        jmethodID _jmethodID = env->GetMethodID(_jclazz, "getClassId", "()Ljava/lang/String;");
        jstring _jclsId = (jstring)env->CallObjectMethod(_item, _jmethodID);
        const char* _jclsIdStr = env->GetStringUTFChars(_jclsId, nullptr);
        mJavaCarManager->GetCarObject(String(_jclsIdStr), &_carobj);
        env->ReleaseStringUTFChars(_jclsId, _jclsIdStr);

        if (!_carobj) break;
        (*_array)[i] = ICarrier::Probe(_carobj);
        (*_array)[i]->AddRef();
    }
    *carriers = _array;
    (*carriers)->AddRef();
    Detach();
    return NOERROR;
}

ECode CTestCar::JavaInit(
    /* [in] */ Handle64 jvm)
{
    mJvm = (JavaVM*)jvm;
    assert(mJvm != NULL);

    return NOERROR;
}

ECode CTestCar::constructor(
        /* [in] */ const ArrayOf<Double> & dArray,
        /* [in] */ const ArrayOf<String> & sArray)
{
    // TODO: Add your code here for constructor
    return NOERROR;
}

ECode CTestCar::constructor(
        /* [in] */ IServiceManager * pSm,
        /* [in] */ ICarrier * pCarrier)
{
    // TODO: Add your code here for constructor
    return NOERROR;
}

JNIEnv* CTestCar::GetEnv()
{
    JNIEnv* env;
    assert(mJvm != NULL);
    mJvm->AttachCurrentThread(&env, NULL);
    return env;
}

void CTestCar::Detach()
{
    assert(mJvm != NULL);
    mJvm->DetachCurrentThread();
}

