/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBPageInviteToMentionsAppData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _inviteeName;
	NSString* _inviteeContactPoint;
	NSString* _inviteePageId;

}

@property (nonatomic,copy) NSString * clientMutationId;                 //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                          //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * inviteeName;                      //@synthesize inviteeName=_inviteeName - In the implementation block
@property (nonatomic,copy) NSString * inviteeContactPoint;              //@synthesize inviteeContactPoint=_inviteeContactPoint - In the implementation block
@property (nonatomic,copy) NSString * inviteePageId;                    //@synthesize inviteePageId=_inviteePageId - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setInviteeName:(NSString *)arg1 ;
-(NSString *)inviteeContactPoint;
-(void)setInviteeContactPoint:(NSString *)arg1 ;
-(NSString *)inviteePageId;
-(void)setInviteePageId:(NSString *)arg1 ;
-(NSString *)inviteeName;
@end
