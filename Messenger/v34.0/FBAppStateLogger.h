/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSString, NSObject, NSMutableArray, NSFileManager, FBAppState;

@interface FBAppStateLogger : NSObject {

	NSString* _loggingDirectory;
	BOOL _appStateWasLoaded;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _currentRunApplicationStates;
	NSMutableArray* _lastRunApplicationStates;
	Mutex _lastRunDataMutex;
	NSFileManager* _fileManager;
	FBAppState* _finalState;

}
-(void)updateApplicationState:(long long)arg1 withNotification:(id)arg2 ;
-(id)initWithLoggingDirectory:(id)arg1 fileManager:(id)arg2 ;
-(id)loggingDirectory;
-(id)defaultLoggingDirectory;
-(void)loadApplicationTerminationStateIfNeeded;
-(id)getLaunchReason:(id)arg1 ;
-(void)addNewAppStateAndSave:(id)arg1 ;
-(id)loggingPath:(id)arg1 ;
-(id)getLastApplicationStates;
-(id)getFinalState;
-(id)copyCurrentRunStates;
-(void)dealloc;
-(id)init;
-(id)queue;
@end

