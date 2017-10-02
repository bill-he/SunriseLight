#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Spark-SDK.h"
#import "EventSource.h"
#import "KeychainItemWrapper.h"
#import "SparkAccessToken.h"
#import "SparkCloud.h"
#import "SparkDevice.h"
#import "SparkEvent.h"
#import "SparkUser.h"

FOUNDATION_EXPORT double Spark_SDKVersionNumber;
FOUNDATION_EXPORT const unsigned char Spark_SDKVersionString[];

