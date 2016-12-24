/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/DDAbstractLogger.h>
#import <Facebook/DDLogger.h>

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
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)logMessage:(id)arg1 ;
@end
