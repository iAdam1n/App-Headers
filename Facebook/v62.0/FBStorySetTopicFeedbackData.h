/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBStorySetTopicFeedbackData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _zombie;
	NSArray* _suggestedTopicIds;
	NSArray* _existingTopicIds;
	NSString* _topicFeedback;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * zombie;                        //@synthesize zombie=_zombie - In the implementation block
@property (nonatomic,copy) NSArray * suggestedTopicIds;              //@synthesize suggestedTopicIds=_suggestedTopicIds - In the implementation block
@property (nonatomic,copy) NSArray * existingTopicIds;               //@synthesize existingTopicIds=_existingTopicIds - In the implementation block
@property (nonatomic,copy) NSString * topicFeedback;                 //@synthesize topicFeedback=_topicFeedback - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(NSString *)clientMutationId;
-(void)setZombie:(NSString *)arg1 ;
-(NSString *)zombie;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)suggestedTopicIds;
-(void)setSuggestedTopicIds:(NSArray *)arg1 ;
-(NSArray *)existingTopicIds;
-(void)setExistingTopicIds:(NSArray *)arg1 ;
-(NSString *)topicFeedback;
-(void)setTopicFeedback:(NSString *)arg1 ;
@end
