/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBProfileSetEventsCalendarSubscriptionStatusInputDataContext;

@interface FBProfileSetEventsCalendarSubscriptionStatusInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _profileId;
	NSString* _subscriptionStatus;
	NSString* _eventId;
	FBProfileSetEventsCalendarSubscriptionStatusInputDataContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;                                                         //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                                                  //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * profileId;                                                                //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,copy) NSString * subscriptionStatus;                                                       //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy) NSString * eventId;                                                                  //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) FBProfileSetEventsCalendarSubscriptionStatusInputDataContext * context;              //@synthesize context=_context - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(void)setSubscriptionStatus:(NSString *)arg1 ;
-(NSString *)subscriptionStatus;
-(FBProfileSetEventsCalendarSubscriptionStatusInputDataContext *)context;
-(void)setContext:(FBProfileSetEventsCalendarSubscriptionStatusInputDataContext *)arg1 ;
-(void)setProfileId:(NSString *)arg1 ;
-(NSString *)profileId;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
@end

