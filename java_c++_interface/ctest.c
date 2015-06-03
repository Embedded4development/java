#include<stdio.h>
#include<jni.h>

JNIEXPORT void JNICALL Java_HelloWorld_helloFromC
  (JNIEnv *jv, jobject obj)
  {
	  printf("Hello Word!!!\n");
	  
  }
