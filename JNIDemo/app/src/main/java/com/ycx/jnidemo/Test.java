package com.ycx.jnidemo;

/**
 * Created by 李小明 on 16/10/11.
 * 邮箱:287907160@qq.com
 */

public class Test {

    static {
        System.loadLibrary("test");
    }

    //1.基本函数
    public native String getString();

    //2.向C函数传递int 类型参数
    public native int postInteger(int i,int j);
    //3.向C函数传递String 类型参数
    public native String postString(String src);

    public native int[] postIntArray(int[] array);

}
