/*
* Copyright (c) 2013-2020, The PurpleI2P Project
*
* This file is part of Purple i2pd project and licensed under BSD3
*
* See full license text in LICENSE file at top of project tree
*/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_purplei2p_i2pd_I2PD_JNI */

#ifndef _Included_org_purplei2p_i2pd_I2PD_JNI
#define _Included_org_purplei2p_i2pd_I2PD_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_purplei2p_i2pd_I2PD_JNI
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_getABICompiledWith
	(JNIEnv *, jclass);

JNIEXPORT jstring JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_startDaemon
	(JNIEnv *, jclass);

JNIEXPORT jstring JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_getDataDir
	(JNIEnv *, jclass);

JNIEXPORT void JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_stopDaemon
	(JNIEnv *, jclass);

JNIEXPORT void JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_stopAcceptingTunnels
	(JNIEnv *, jclass);

JNIEXPORT void JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_startAcceptingTunnels
	(JNIEnv *, jclass);

JNIEXPORT void JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_reloadTunnelsConfigs
	(JNIEnv *, jclass);

JNIEXPORT void JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_onNetworkStateChanged
	(JNIEnv * env, jclass clazz, jboolean isConnected);

JNIEXPORT void JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_setDataDir
	(JNIEnv *env, jclass clazz, jstring jdataDir);

JNIEXPORT jint JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_GetTransitTunnelsCount
	(JNIEnv *, jclass);

JNIEXPORT jstring JNICALL Java_org_purplei2p_i2pd_I2PD_1JNI_getWebConsAddr
	(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
