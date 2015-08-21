/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:09 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/DDAbstractLogger.h>
#import <Messenger/DDLogger.h>

@protocol DDLogFileManager;
@class DDLogFileInfo, NSFileHandle, NSTimer, NSString;

@interface DDFileLogger : DDAbstractLogger <DDLogger> {

	id<DDLogFileManager> logFileManager;
	DDLogFileInfo* currentLogFileInfo;
	NSFileHandle* currentLogFileHandle;
	NSTimer* rollingTimer;
	unsigned long long maximumFileSize;
	double rollingFrequency;

}

@property (assign) unsigned long long maximumFileSize; 
@property (assign) double rollingFrequency; 
@property (nonatomic,readonly) id<DDLogFileManager> logFileManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loggerName;
-(id)initWithLogFileManager:(id)arg1 ;
-(void)maybeRollLogFileDueToSize;
-(void)maybeRollLogFileDueToAge:(id)arg1 ;
-(void)rollLogFileNow;
-(void)scheduleTimerToRollLogFileDueToAge;
-(id)currentLogFileInfo;
-(id)currentLogFileHandle;
-(unsigned long long)maximumFileSize;
-(void)setMaximumFileSize:(unsigned long long)arg1 ;
-(double)rollingFrequency;
-(void)setRollingFrequency:(double)arg1 ;
-(void)rollLogFile;
-(id<DDLogFileManager>)logFileManager;
-(void)dealloc;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

