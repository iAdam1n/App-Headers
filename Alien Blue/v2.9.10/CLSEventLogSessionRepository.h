/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSFileManager;

@interface CLSEventLogSessionRepository : NSObject {

	NSURL* _rootDirectoryURL;
	NSFileManager* _fileManager;

}
+(unsigned long long)priorityForEventLogFileWithName:(id)arg1 ;
+(id)sessionDirectoryNameWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2 ;
+(id)prepDirectoryForDirectoryURL:(id)arg1 ;
+(BOOL)isPrepDirectoryURL:(id)arg1 ;
+(id)sessionFragmentDirectoryNameWithIdentifier:(id)arg1 timestamp:(unsigned long long)arg2 ;
+(id)sessionDirectoryURLForSessionFragmentDirectoryURL:(id)arg1 ;
+(id)stateDirectoryURLForSessionDirectoryURL:(id)arg1 ;
+(id)activeEventLogFileNameForPriority:(unsigned long long)arg1 ;
+(id)sessionFragmentDirectoryURLForLogFileURL:(id)arg1 ;
-(id)initWithRootDirectoryURL:(id)arg1 ;
-(id)sessionDirectoryURLForStateName:(id)arg1 sessionIdentifier:(id)arg2 sessionTimestamp:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)eventLogFileURLForStateName:(id)arg1 sessionIdentifier:(id)arg2 sessionTimestamp:(unsigned long long)arg3 sessionFragmentIdentifier:(id)arg4 sessionFragmentTimestamp:(unsigned long long)arg5 eventPriority:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)sessionFragmentDirectoryURLForStateName:(id)arg1 sessionIdentifier:(id)arg2 sessionTimestamp:(unsigned long long)arg3 sessionFragmentIdentifier:(id)arg4 sessionFragmentTimestamp:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)sessionDirectoryURLsForStateName:(id)arg1 error:(id*)arg2 ;
-(id)sessionFragmentDirectoryURLsForSessionDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)purgePrepSessionFragmentDirectoriesForStateName:(id)arg1 error:(id*)arg2 ;
-(id)prepSessionFragmentDirectoryURLForStateName:(id)arg1 sessionFragmentDirectoryURL:(id)arg2 error:(id*)arg3 ;
-(id)removePrepStatusFromSessionFragmentDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeSessionFragmentDirectory:(id)arg1 error:(id*)arg2 ;
-(id)logFileURLsForSessionFragmentDirectory:(id)arg1 error:(id*)arg2 ;
-(id)logFileURLsForAllStates:(id*)arg1 ;
-(BOOL)removeLogFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)cleanUpEventLogRepositoryIgnorningSessionFragmentDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteItemAtPath:(id)arg1 ifNotOfType:(int)arg2 error:(id*)arg3 ;
-(id)versionDirectoryName;
-(BOOL)createDirectoryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)stateDirectoryURLForStateName:(id)arg1 error:(id*)arg2 ;
-(id)arrayByFilteringNonDirectoriesFromURLs:(id)arg1 ;
-(BOOL)isDirectoryURL:(id)arg1 ;
-(BOOL)itemURL:(id)arg1 hasPathExtensionMatching:(id)arg2 ;
-(id)contentsOfDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteItemAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)cleanUpLogFileURL:(id)arg1 shouldDelete:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)cleanUpDirectoryURL:(id)arg1 shouldDelete:(BOOL*)arg2 error:(id*)arg3 withCleanUpBlock:(/*^block*/id)arg4 ;
-(BOOL)cleanUpSessionFragmentDirectoryURL:(id)arg1 shouldDelete:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)itemURL:(id)arg1 hasNameMatching:(id)arg2 ;
-(BOOL)cleanUpSessionDirectoryURL:(id)arg1 ignoringSessionFragmentDirectoryURL:(id)arg2 shouldDelete:(BOOL*)arg3 error:(id*)arg4 ;
-(id)statesDirectoryURL:(id*)arg1 ;
-(BOOL)cleanUpStateDirectoryURL:(id)arg1 ignoringSessionFragmentDirectoryURL:(id)arg2 shouldDelete:(BOOL*)arg3 error:(id*)arg4 ;
-(id)initWithRootDirectoryPath:(id)arg1 ;
-(BOOL)createFileWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
@end

