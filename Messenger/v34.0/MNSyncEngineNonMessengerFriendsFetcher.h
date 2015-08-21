/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBFriendListModelControllerDelegate.h>
#import <Messenger/MNNonMessengerFriendFetchPerforming.h>

@protocol MNNonMessengerFriendFetchPerformerDelegate;
@class FBFriendListModelController, FBMessengerSyncEngineManager, NSString;

@interface MNSyncEngineNonMessengerFriendsFetcher : NSObject <FBFriendListModelControllerDelegate, MNNonMessengerFriendFetchPerforming> {

	FBFriendListModelController* _modelController;
	id<MNNonMessengerFriendFetchPerformerDelegate> _delegate;
	FBMessengerSyncEngineManager* _syncEngineManager;
	unsigned _fetchLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)searchOperationForSyncStore:(id)arg1 ;
-(void)modelController:(id)arg1 didCompleteSearchOperationReturningPeople:(id)arg2 ;
-(void)startWithDelegate:(id)arg1 fetchLimit:(unsigned)arg2 ;
-(id)initWithSyncEngineManager:(id)arg1 ;
-(void)dealloc;
-(void)stop;
@end

