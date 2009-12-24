/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_jezhumble_javasysmon_MacOsXMonitor */

#ifndef _Included_com_jezhumble_javasysmon_MacOsXMonitor
#define _Included_com_jezhumble_javasysmon_MacOsXMonitor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    cpuUsage
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_cpuUsage
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    totalMemory
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_totalMemory
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    freeMemory
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_freeMemory
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    totalSwap
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_totalSwap
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    freeSwap
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_freeSwap
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    numCpus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_numCpus
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    cpuFrequency
 * Signature: ()I
 */
JNIEXPORT jlong JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_cpuFrequency
  (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    uptimeInSeconds
 * Signature: ()J
 */
 JNIEXPORT jlong JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_uptimeInSeconds
   (JNIEnv *, jobject);

/*
 * Class:     com_jezhumble_javasysmon_MacOsXMonitor
 * Method:    numCpus
 * Signature: ()I
 */
 JNIEXPORT jint JNICALL Java_com_jezhumble_javasysmon_MacOsXMonitor_currentPid
   (JNIEnv *, jobject);
	
#ifdef __cplusplus
}
#endif
#endif
