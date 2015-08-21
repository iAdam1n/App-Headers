/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPageUnfollowMentionsTopicInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _topicId;
	NSString* _topicPageId;
	NSString* _topicType;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * topicId;                       //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,copy) NSString * topicPageId;                   //@synthesize topicPageId=_topicPageId - In the implementation block
@property (nonatomic,copy) NSString * topicType;                     //@synthesize topicType=_topicType - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)topicId;
-(void)setTopicId:(NSString *)arg1 ;
-(NSString *)topicPageId;
-(void)setTopicPageId:(NSString *)arg1 ;
-(NSString *)topicType;
-(void)setTopicType:(NSString *)arg1 ;
@end

