/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSURL, NSString, NSDate;

@interface FBBreakpadCrashReport : NSObject {

	NSMutableDictionary* _parameters;
	NSMutableDictionary* _fileAttachmentData;
	NSURL* _exceptionURL;
	NSString* _minidumpPath;
	NSString* _configPath;
	NSString* _extraPath;
	NSDate* _crashTime;

}

@property (nonatomic,readonly) NSURL * exceptionURL;                      //@synthesize exceptionURL=_exceptionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * minidumpPath;              //@synthesize minidumpPath=_minidumpPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * configPath;                //@synthesize configPath=_configPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * extraPath;                 //@synthesize extraPath=_extraPath - In the implementation block
@property (nonatomic,readonly) NSDate * crashTime;                        //@synthesize crashTime=_crashTime - In the implementation block
+(double)defaultSendCrashReportTimeoutInterval;
+(void)cleanupCorruptedCrashReportWithConfigPath:(id)arg1 ;
-(NSDate *)crashTime;
-(id)minidumpData;
-(void)addParameter:(id)arg1 forKey:(id)arg2 ;
-(void)addFileUploadAttachment:(id)arg1 ;
-(id)sendCrashReport:(id*)arg1 timeoutInterval:(double)arg2 ;
-(void)removeFileUploadAttachment:(id)arg1 ;
-(NSURL *)exceptionURL;
-(BOOL)loadConfigFile:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithConfigPath:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)sendCrashReport:(id*)arg1 ;
-(void)cleanupFiles;
-(NSString *)minidumpPath;
-(NSString *)configPath;
-(NSString *)extraPath;
-(id)parameters;
-(void)removeParameterForKey:(id)arg1 ;
@end
