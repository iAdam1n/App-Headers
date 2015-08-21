/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBEventUpdateExtendedViewerWatchStatusInputDataContext;

@interface FBEventUpdateExtendedViewerWatchStatusInputData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _eventId;
	NSString* _watchStatus;
	NSArray* _tracking;
	FBEventUpdateExtendedViewerWatchStatusInputDataContext* _context;

}

@property (nonatomic,copy) NSString * clientMutationId;                                                   //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                                            //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * eventId;                                                            //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * watchStatus;                                                        //@synthesize watchStatus=_watchStatus - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                                                            //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) FBEventUpdateExtendedViewerWatchStatusInputDataContext * context;              //@synthesize context=_context - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientMutationId;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)watchStatus;
-(void)setWatchStatus:(NSString *)arg1 ;
-(FBEventUpdateExtendedViewerWatchStatusInputDataContext *)context;
-(void)setContext:(FBEventUpdateExtendedViewerWatchStatusInputDataContext *)arg1 ;
-(void)setTracking:(NSArray *)arg1 ;
-(NSArray *)tracking;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
@end

