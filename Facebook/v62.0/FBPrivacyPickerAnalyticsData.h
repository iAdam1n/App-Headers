/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPrivacyPickerAnalyticsData : NSObject {

	unsigned long long _timeSpentStartTime;
	NSString* _source;
	NSString* _composerSession;
	NSString* _composerType;

}

@property (nonatomic,copy,readonly) NSString * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerSession;                    //@synthesize composerSession=_composerSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * composerType;                       //@synthesize composerType=_composerType - In the implementation block
@property (nonatomic,readonly) unsigned long long timeSpentStartTime;              //@synthesize timeSpentStartTime=_timeSpentStartTime - In the implementation block
-(id)initWithSource:(id)arg1 composerSession:(id)arg2 composerType:(id)arg3 ;
-(NSString *)composerType;
-(id)markTimeSpentStart;
-(id)initWithSource:(id)arg1 composerSession:(id)arg2 composerType:(id)arg3 timeSpentStartTime:(unsigned long long)arg4 ;
-(NSString *)composerSession;
-(unsigned long long)timeSpentStartTime;
-(NSString *)source;
@end
