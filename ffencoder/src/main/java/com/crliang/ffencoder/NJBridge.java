package com.crliang.ffencoder;

public class NJBridge {
    static {
        System.loadLibrary("native-lib");
    }

    public native String stringFromJNI();

    public native String StringTest();

}
