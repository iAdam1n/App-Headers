/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMSPDeltaHandling.h>

@class FBMThreadSet, FBMLocalThreadMessagesManipulator, NSString;

@interface FBMSPThreadDeleteDeltaHandler : NSObject <FBSessionClassProvidable, FBMSPDeltaHandling> {

	FBMThreadSet* _threadSet;
	FBMLocalThreadMessagesManipulator* _messageManipulator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_threadKeysForDelta:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)threadKeysForPrepareFromDelta:(id)arg1 ;
-(id)affectedThreadKeysForDelta:(id)arg1 ;
-(id)incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(id)threadKeysToDeleteForDelta:(id)arg1 ;
-(id)initWithThreadSet:(id)arg1 messageManipulator:(id)arg2 ;
-(void)_processDeletedThreadIdsFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

