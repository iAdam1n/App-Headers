/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:15 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBGraphQLMutation.h>

@class NSString, FBMemModelObject;

@interface FBGraphQLMutationBase : NSObject <FBGraphQLMutation> {

	id _input;
	NSString* _mutationIdentifier;
	FBMemModelObject* _optimisticPayload;
	FBMemModelObject* _rollbackOptimisticPayload;
	/*^block*/id _successHandler;
	/*^block*/id _errorHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clientMutationId;
-(id)actorId;
-(id)optimisticPayload;
-(id)rollbackOptimisticPayload;
-(id)commonMutationIdentifier;
-(id)initWithInput:(id)arg1 optimisticPayloadFactory:(id)arg2 successHandler:(/*^block*/id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)input;
-(/*^block*/id)errorHandler;
-(/*^block*/id)successHandler;
@end

