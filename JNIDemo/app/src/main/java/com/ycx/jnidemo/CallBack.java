package com.ycx.jnidemo;

import android.provider.Settings;
import android.util.Log;

/**
 * Created by 李小明 on 16/10/12.
 * 邮箱:287907160@qq.com
 */

public class CallBack {

    static {
        System.loadLibrary("test");
    }

    public native void JNICallVoidJava();  //JNI回调void
    public native void JNICallIntJava(); //JNI回调int
    public native void JNICallStringJava();//JNI回调String

    public native void JNICallToastJava();//JNI回调String



    public void callVoidMethod(){
        Log.i("lxm","回调空参数方法");
    }

    public void callIntMethod(int a,int b){
        Log.i("lxm","回调int参数方法 sum = "+(a+b));
    }
    public void callStringMethod(String src){
        Log.i("lxm","回调String参数方法 src = "+src);
    }


}
