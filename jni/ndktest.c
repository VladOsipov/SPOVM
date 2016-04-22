#include<jni.h>
#include<string.h>

jstring Java_com_example_note_ndktest2_MainActivity_helloWorld(JNIEnv* env, jobject obj){

        return(*env)->NewStringUTF(env,"Hellow world");

}