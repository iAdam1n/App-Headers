/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/DDAbstractLogger.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface DDAbstractDatabaseLogger : DDAbstractLogger {

	unsigned long long saveThreshold;
	double saveInterval;
	double maxAge;
	double deleteInterval;
	BOOL deleteOnEverySave;
	BOOL saveTimerSuspended;
	unsigned long long unsavedCount;
	unsigned long long unsavedTime;
	NSObject*<OS_dispatch_source> saveTimer;
	unsigned long long lastDeleteTime;
	NSObject*<OS_dispatch_source> deleteTimer;

}

@property (assign) unsigned long long saveThreshold; 
@property (assign) double saveInterval; 
@property (assign) double maxAge; 
@property (assign) double deleteInterval; 
@property (assign) BOOL deleteOnEverySave; 
-(void)didAddLogger;
-(void)willRemoveLogger;
-(void)destroySaveTimer;
-(void)destroyDeleteTimer;
-(void)db_saveAndDelete;
-(void)db_save;
-(void)db_delete;
-(void)performSaveAndSuspendSaveTimer;
-(void)performDelete;
-(void)updateDeleteTimer;
-(void)createSuspendedSaveTimer;
-(void)updateAndResumeSaveTimer;
-(void)createAndStartDeleteTimer;
-(BOOL)db_log:(id)arg1 ;
-(unsigned long long)saveThreshold;
-(void)setSaveThreshold:(unsigned long long)arg1 ;
-(double)saveInterval;
-(void)setSaveInterval:(double)arg1 ;
-(double)deleteInterval;
-(void)setDeleteInterval:(double)arg1 ;
-(BOOL)deleteOnEverySave;
-(void)setDeleteOnEverySave:(BOOL)arg1 ;
-(void)savePendingLogEntries;
-(void)deleteOldLogEntries;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)logMessage:(id)arg1 ;
-(void)setMaxAge:(double)arg1 ;
-(double)maxAge;
@end

