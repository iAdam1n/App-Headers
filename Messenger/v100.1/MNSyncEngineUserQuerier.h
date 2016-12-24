/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserQuerying.h>

@class FBMessengerSyncEngineManager;

@interface MNSyncEngineUserQuerier : NSObject <MNUserQuerying> {

	FBMessengerSyncEngineManager* _syncEngineManager;

}
-(void)fetchUserWithId:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(id)initWithSyncEngineManager:(id)arg1 ;
-(BOOL)storeIsOpen;
-(void)fetchUsersWithIds:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
@end
