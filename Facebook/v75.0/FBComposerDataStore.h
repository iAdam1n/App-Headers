/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSHashTable, NSMutableArray, FBExceptionHandler;

@interface FBComposerDataStore : NSObject {

	/*^block*/id _announcementBlock;
	NSHashTable* _listeners;
	id _currentState;
	id _mostRecentState;
	id _previousState;
	BOOL _announcingStateChange;
	NSMutableArray* _stateQueueToHandleReetrantEvents;
	NSMutableArray* _completionHandlerQueueToHandleReetrantEvents;
	FBExceptionHandler* _exceptionHandler;
	NSMutableArray* _recentUpdates;

}
-(id)initWithAnnouncementBlock:(/*^block*/id)arg1 exceptionHandler:(id)arg2 ;
-(void)processUpdates:(const vector<FBComposerDataStoreUpdate, std::__1::allocator<FBComposerDataStoreUpdate> >*)arg1 performanceHandlers:(const SCD_Struct_FB1171*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updatedState:(id)arg1 performanceHandlers:(const SCD_Struct_FB1171*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_announceState:(id)arg1 performanceHandlers:(const SCD_Struct_FB1171*)arg2 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
