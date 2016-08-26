/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface SKPSessionStatistics : NSObject {

	unsigned long long _appEntryReason;
	NSDate* _foregroundedDate;
	NSDate* _backgroundedDate;
	unsigned long long _appExitReason;

}

@property (nonatomic,retain) NSDate * foregroundedDate;                      //@synthesize foregroundedDate=_foregroundedDate - In the implementation block
@property (nonatomic,retain) NSDate * backgroundedDate;                      //@synthesize backgroundedDate=_backgroundedDate - In the implementation block
@property (assign,nonatomic) unsigned long long appExitReason;               //@synthesize appExitReason=_appExitReason - In the implementation block
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * screenHeightInPixels; 
@property (nonatomic,readonly) NSString * screenWidthInPixels; 
@property (assign,nonatomic) unsigned long long appEntryReason;              //@synthesize appEntryReason=_appEntryReason - In the implementation block
-(void)startForegroundedSessionWithReason:(unsigned long long)arg1 ;
-(void)stopForegroundedSessionWithReason:(unsigned long long)arg1 ;
-(BOOL)lastSessionCrashed;
-(void)reportEventForCrashedSession;
-(void)setAppEntryReason:(unsigned long long)arg1 ;
-(void)setAppExitReason:(unsigned long long)arg1 ;
-(void)setForegroundedDate:(NSDate *)arg1 ;
-(void)setBackgroundedDate:(NSDate *)arg1 ;
-(NSDate *)foregroundedDate;
-(void)sessionDataCleanup;
-(NSDate *)backgroundedDate;
-(unsigned long long)appEntryReason;
-(unsigned long long)appExitReason;
-(NSString *)screenWidthInPixels;
-(NSString *)screenHeightInPixels;
-(void)reportBackgroundSessionStopped;
-(void)dealloc;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)stop;
-(void)start;
-(NSString *)productName;
-(id)userInfoDictionary;
@end
