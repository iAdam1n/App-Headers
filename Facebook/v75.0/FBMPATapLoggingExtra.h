/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, FBAnalyticsInfo, FBIntentTarget, FBIntentSource;

@interface FBMPATapLoggingExtra : NSObject {

	NSNumber* _index;
	FBAnalyticsInfo* _analyticsInfo;
	FBIntentTarget* _target;
	FBIntentSource* _source;

}

@property (nonatomic,readonly) NSNumber * index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,readonly) FBIntentTarget * target;                      //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) FBIntentSource * source;                      //@synthesize source=_source - In the implementation block
-(FBAnalyticsInfo *)analyticsInfo;
-(id)initWithIndex:(id)arg1 analyticsInfo:(id)arg2 target:(id)arg3 source:(id)arg4 ;
-(FBIntentTarget *)target;
-(NSNumber *)index;
-(FBIntentSource *)source;
@end
