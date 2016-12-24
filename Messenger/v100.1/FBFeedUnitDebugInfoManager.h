/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBFeedUnitDebugInfoManagerListenerAnnouncer, NSMutableDictionary;

@interface FBFeedUnitDebugInfoManager : NSObject {

	FBFeedUnitDebugInfoManagerListenerAnnouncer* _announcer;
	BOOL _debugInfoEnabled;
	NSMutableDictionary* _deduplicationKeyToVPVdStateMap;
	ReadWriteLock _debugInfoEnabledLock;
	ReadWriteLock _unitVPVdStateLock;

}
-(void)_updateDebugInfoEnabledValue;
-(void)_feedUnitDebugInfoEnabledValueDidChange:(id)arg1 ;
-(BOOL)debugInfoEnabled;
-(id)generateDebugIdentifierWithDeduplicationKey:(id)arg1 ;
-(BOOL)unitIsInVPVdFocusedRange:(id)arg1 ;
-(double)accumulatedVPVdDurationForUnit:(id)arg1 ;
-(void)markVPVdRecordingStartForUnit:(id)arg1 ;
-(void)markVPVdRecordingEndForUnit:(id)arg1 duration:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
