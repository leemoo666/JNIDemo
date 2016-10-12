#include<stdio.h>
#include<stdlib.h>
#include<jni.h>
#include<android/log.h>


#define LOG_TAG "lxm"
//#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
//#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)


  /*
   * Class:     com_ycx_jnidemo_CallBack
   * Method:    JNICallVoidJava
   * Signature: ()V
   */
  JNIEXPORT void JNICALL Java_com_ycx_jnidemo_CallBack_JNICallVoidJava
    (JNIEnv *env, jobject obj){
        //1 获取字节码对象
        //jclass      (*FindClass)(JNIEnv*, const char*);
         jclass clazz =  (*env)->FindClass(env,"com/ycx/jnidemo/CallBack");

        //2 获取method对象
        //jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
          jmethodID methodid = (*env)->GetMethodID(env,clazz,"callVoidMethod","()V");

//3 调用方法
		(*env)->CallVoidMethod(env,obj,methodid);
   }

  /*
   * Class:     com_ycx_jnidemo_CallBack
   * Method:    JNICallIntJava
   * Signature: ()V
   */
  JNIEXPORT void JNICALL Java_com_ycx_jnidemo_CallBack_JNICallIntJava
    (JNIEnv *env, jobject obj){

 //1 获取字节码对象
        //jclass      (*FindClass)(JNIEnv*, const char*);
         jclass clazz =  (*env)->FindClass(env,"com/ycx/jnidemo/CallBack");

        //2 获取method对象
        //jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
          jmethodID methodid = (*env)->GetMethodID(env,clazz,"callIntMethod","(II)V");

//3 调用方法
		(*env)->CallVoidMethod(env,obj,methodid,3,5);
    }

  /*
   * Class:     com_ycx_jnidemo_CallBack
   * Method:    JNICallStringJava
   * Signature: ()V
   */
  JNIEXPORT void JNICALL Java_com_ycx_jnidemo_CallBack_JNICallStringJava
    (JNIEnv *env, jobject obj){
        //1 获取字节码对象
        //jclass      (*FindClass)(JNIEnv*, const char*);
         jclass clazz =  (*env)->FindClass(env,"com/ycx/jnidemo/CallBack");

        //2 获取method对象
        //jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
          jmethodID methodid = (*env)->GetMethodID(env,clazz,"callStringMethod","(Ljava/lang/String;)V");

        //3 调用方法
        char* src= "nihao!!!";
        jstring javaSrc = (*env)->NewStringUTF(env,src);
		(*env)->CallVoidMethod(env,obj,methodid,javaSrc);

    }


    JNIEXPORT void JNICALL Java_com_ycx_jnidemo_CallBack_JNICallToastJava
      (JNIEnv *env, jobject clazz){

    jclass claz =(*env)->FindClass(env,"com/ycx/jnidemo/MainActivity");
	jmethodID methodid =(*env)->GetMethodID(env,claz,"showToast","()V");
	//通过字节码对象创建 java对象 在这儿就是创建了mainactivity的对象
	jobject obj =(*env)->AllocObject(env,claz);
	(*env)->CallVoidMethod(env,obj,methodid);

      }




