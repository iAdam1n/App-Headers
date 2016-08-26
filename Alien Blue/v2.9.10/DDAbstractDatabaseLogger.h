/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/DDAbstractLogger.h>

@interface DDAbstractDatabaseLogger : DDAbstractLogger {

	unsigned long long saveThreshold;
	double saveInterval;
	double maxAge;
	double deleteInterval;
	BOOL deleteOnEverySave;
	BOOL saveTimerSuspended;
	unsigned long long unsavedCount;
	unsigned long long unsavedTime;
	dispatch_source_sRef saveTimer;
	unsigned long long lastDeleteTime;
	dispatch_source_sRef deleteTimer;

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
-(void)setMaxAge:(double)arg1 ;
-(double)maxAge;
-(void)logMessage:(id)arg1 ;
@end
