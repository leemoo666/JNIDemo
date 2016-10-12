package com.ycx.jnidemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        testCCallJava();

    }

    public void testJavaCallC(){
        Test test = new Test();
        Log.i("lxm", "...." + test.getString());
        Log.i("lxm", "...." + test.postInteger(45, 4));
        Log.i("lxm", "...." +  test.postString("abcde"));
        int[] array = new int[]{1,2,3,4};
        test.postIntArray(array);
        for (int i = 0;i < array.length;i++){
            Log.i("lxm","aaa = "+array[i]);
        }
    }


    public void testCCallJava(){
        CallBack callBack = new CallBack();
        callBack.JNICallVoidJava();


        callBack.JNICallIntJava();


        callBack.JNICallStringJava();

        callBack.JNICallToastJava();
    }


    public void showToast(){
        Log.i("lxm","showToast....");
    }

}
