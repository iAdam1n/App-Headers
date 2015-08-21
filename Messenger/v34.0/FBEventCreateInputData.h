/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBEventCreateInputDataContext, NSArray, FBEventCreateInputDataCoverPhotoInfo;

@interface FBEventCreateInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _name;
	NSString* _startTime;
	NSString* _endTime;
	NSString* _descriptionText;
	NSString* _invitePolicy;
	NSString* _locationName;
	NSString* _locationId;
	NSString* _eventType;
	NSString* _eventVisibility;
	FBEventCreateInputDataContext* _context;
	NSString* _objectId;
	NSArray* _inviteeIds;
	NSArray* _addHostIds;
	NSString* _canPostPolicy;
	NSString* _privacyUpdatePolicy;
	FBEventCreateInputDataCoverPhotoInfo* _coverPhotoInfo;

}

@property (nonatomic,copy) NSString * clientMutationId;                                        //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                                 //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * startTime;                                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSString * endTime;                                                 //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                         //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * invitePolicy;                                            //@synthesize invitePolicy=_invitePolicy - In the implementation block
@property (nonatomic,copy) NSString * locationName;                                            //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * locationId;                                              //@synthesize locationId=_locationId - In the implementation block
@property (nonatomic,copy) NSString * eventType;                                               //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy) NSString * eventVisibility;                                         //@synthesize eventVisibility=_eventVisibility - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataContext * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * objectId;                                                //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,copy) NSArray * inviteeIds;                                               //@synthesize inviteeIds=_inviteeIds - In the implementation block
@property (nonatomic,copy) NSArray * addHostIds;                                               //@synthesize addHostIds=_addHostIds - In the implementation block
@property (nonatomic,copy) NSString * canPostPolicy;                                           //@synthesize canPostPolicy=_canPostPolicy - In the implementation block
@property (nonatomic,copy) NSString * privacyUpdatePolicy;                                     //@synthesize privacyUpdatePolicy=_privacyUpdatePolicy - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfo * coverPhotoInfo;              //@synthesize coverPhotoInfo=_coverPhotoInfo - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)invitePolicy;
-(void)setInvitePolicy:(NSString *)arg1 ;
-(NSString *)eventVisibility;
-(void)setEventVisibility:(NSString *)arg1 ;
-(NSArray *)inviteeIds;
-(void)setInviteeIds:(NSArray *)arg1 ;
-(NSArray *)addHostIds;
-(void)setAddHostIds:(NSArray *)arg1 ;
-(NSString *)canPostPolicy;
-(void)setCanPostPolicy:(NSString *)arg1 ;
-(NSString *)privacyUpdatePolicy;
-(void)setPrivacyUpdatePolicy:(NSString *)arg1 ;
-(FBEventCreateInputDataCoverPhotoInfo *)coverPhotoInfo;
-(void)setCoverPhotoInfo:(FBEventCreateInputDataCoverPhotoInfo *)arg1 ;
-(NSString *)eventType;
-(void)setEndTime:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setStartTime:(NSString *)arg1 ;
-(FBEventCreateInputDataContext *)context;
-(void)setContext:(FBEventCreateInputDataContext *)arg1 ;
-(NSString *)startTime;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setEventType:(NSString *)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
-(NSString *)endTime;
@end

