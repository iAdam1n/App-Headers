/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBComposerVideoTaggingAnalyticsPayload : FBValueObject <NSCopying, NSCoding> {

	BOOL _faceDetected;
	BOOL _analysisFinished;
	long long _timeToFace;

}

@property (nonatomic,readonly) BOOL faceDetected;                  //@synthesize faceDetected=_faceDetected - In the implementation block
@property (nonatomic,readonly) BOOL analysisFinished;              //@synthesize analysisFinished=_analysisFinished - In the implementation block
@property (nonatomic,readonly) long long timeToFace;               //@synthesize timeToFace=_timeToFace - In the implementation block
-(id)initWithFaceDetected:(BOOL)arg1 analysisFinished:(BOOL)arg2 timeToFace:(long long)arg3 ;
-(BOOL)faceDetected;
-(BOOL)analysisFinished;
-(long long)timeToFace;
@end
