#include <jni.h>
#include <string>

extern "C" {
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_crliang_ffencoder_NJBridge_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    avcodec_register_all();
    avformat_network_init();

    std::string hello = "Hello from C++";


    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_crliang_ffencoder_NJBridge_StringTest(JNIEnv *env, jobject thiz) {
    // TODO: implement StringTest()
}