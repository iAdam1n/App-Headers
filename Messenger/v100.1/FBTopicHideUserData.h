/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBTopicHideUserData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _hideUserId;
	NSString* _hideTopicId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * hideUserId;                    //@synthesize hideUserId=_hideUserId - In the implementation block
@property (nonatomic,copy) NSString * hideTopicId;                   //@synthesize hideTopicId=_hideTopicId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)hideUserId;
-(void)setHideUserId:(NSString *)arg1 ;
-(NSString *)hideTopicId;
-(void)setHideTopicId:(NSString *)arg1 ;
@end
