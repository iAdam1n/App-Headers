/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSetIdleTimerApplicationProtocol;
@class NSHashTable;

@interface FNFIdleTimeoutManager : NSObject {

	NSHashTable* _clients;
	id<FBSetIdleTimerApplicationProtocol> _application;

}
+(id)sharedInstance;
-(void)addNonIdlingClient:(id)arg1 ;
-(void)removeNonIdlingClient:(id)arg1 ;
-(void)_setApplication:(id)arg1 ;
-(id)init;
@end
