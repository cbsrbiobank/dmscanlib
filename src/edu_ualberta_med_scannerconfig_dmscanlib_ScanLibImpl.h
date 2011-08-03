/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl */

#ifndef _Included_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
#define _Included_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
#ifdef __cplusplus
extern "C" {
#endif
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_MIN_PLATE_NUM
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_MIN_PLATE_NUM 1L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_MAX_PLATE_NUM
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_MAX_PLATE_NUM 5L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_SC_SUCCESS
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_SC_SUCCESS 0L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_SC_FAIL
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_SC_FAIL -1L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_IS_WIA
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_IS_WIA 1L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_DPI_300
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_DPI_300 2L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_DPI_400
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_DPI_400 4L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_DPI_600
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_DPI_600 8L
#undef edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_IS_SCANNER
#define edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_CAP_IS_SCANNER 16L
/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slIsTwainAvailable
 * Signature: ()Ledu/ualberta/med/scannerconfig/dmscanlib/ScanLibResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slIsTwainAvailable(
		JNIEnv *, jobject);

/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slSelectSourceAsDefault
 * Signature: ()Ledu/ualberta/med/scannerconfig/dmscanlib/ScanLibResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slSelectSourceAsDefault(
		JNIEnv *, jobject);

/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slGetScannerCapability
 * Signature: ()Ledu/ualberta/med/scannerconfig/dmscanlib/ScanLibResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slGetScannerCapability(
		JNIEnv *, jobject);

/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slScanImage
 * Signature: (JJIIDDDDLjava/lang/String;)Ledu/ualberta/med/scannerconfig/dmscanlib/ScanLibResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slScanImage(
		JNIEnv *, jobject, jlong, jlong, jint, jint, jdouble, jdouble, jdouble,
		jdouble, jstring);

/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slScanFlatbed
 * Signature: (JJIILjava/lang/String;)Ledu/ualberta/med/scannerconfig/dmscanlib/ScanLibResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slScanFlatbed(
		JNIEnv *, jobject, jlong, jlong, jint, jint, jstring);

/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slDecodePlate
 * Signature: (JJIIJDDDDDJJJDDDJJJJ)Ledu/ualberta/med/scannerconfig/dmscanlib/DecodeResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slDecodePlate(
		JNIEnv *, jobject, jlong, jlong, jint, jint, jlong, jdouble, jdouble,
		jdouble, jdouble, jdouble, jlong, jlong, jlong, jdouble, jdouble,
		jdouble, jlong, jlong, jlong, jlong);

/*
 * Class:     edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl
 * Method:    slDecodeImage
 * Signature: (JJLjava/lang/String;DJJJDDDJJJJ)Ledu/ualberta/med/scannerconfig/dmscanlib/DecodeResult;
 */
JNIEXPORT jobject JNICALL Java_edu_ualberta_med_scannerconfig_dmscanlib_ScanLibImpl_slDecodeImage(
		JNIEnv *, jobject, jlong, jlong, jstring, jdouble, jlong, jlong, jlong,
		jdouble, jdouble, jdouble, jlong, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif