/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ANSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) NSDictionary * settingsDictionary;               //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSURL * answersURL; 
@property (nonatomic,readonly) BOOL shouldCollectAnalytics; 
@property (nonatomic,readonly) BOOL shouldCollectCustomEvents; 
@property (nonatomic,readonly) BOOL shouldCollectPredefinedEvents; 
@property (nonatomic,readonly) long long maximumPayloadSize; 
@property (nonatomic,readonly) long long maxPendingSendFiles; 
@property (nonatomic,readonly) double flushInterval; 
@property (nonatomic,readonly) long long samplingRate; 
@property (nonatomic,readonly) double defaultUploadTimeout; 
@property (nonatomic,readonly) double lowPowerUploadTimeout; 
-(NSDictionary *)settingsDictionary;
-(NSURL *)answersURL;
-(BOOL)shouldCollectAnalytics;
-(BOOL)shouldCollectCustomEvents;
-(BOOL)shouldCollectPredefinedEvents;
-(long long)maxPendingSendFiles;
-(double)defaultUploadTimeout;
-(double)lowPowerUploadTimeout;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)valid;
-(double)flushInterval;
-(long long)maximumPayloadSize;
-(long long)samplingRate;
@end
