/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNPresenceUpdating.h>

@protocol OS_dispatch_queue, MNPresenceCacheListener;
@class NSObject, NSDictionary, NSString;

@interface MNPresenceCache : NSObject <MNPresenceUpdating> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	id<MNPresenceCacheListener> _listener;
	NSDictionary* _personIdToPresenceMap;

}

@property (copy) NSDictionary * personIdToPresenceMap;              //@synthesize personIdToPresenceMap=_personIdToPresenceMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePresence:(id)arg1 shouldClearExisting:(BOOL)arg2 ;
-(void)setPersonIdToPresenceMap:(NSDictionary *)arg1 ;
-(NSDictionary *)personIdToPresenceMap;
-(id)allTrackedPresenceValues;
-(id)allUserIds;
-(void)configureWithUpdateQueue:(id)arg1 listener:(id)arg2 ;
-(id)onlineUserIds;
-(id)presenceForPersonWithId:(id)arg1 ;
@end
