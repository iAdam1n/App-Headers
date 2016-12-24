/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBFriendRequestSendData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _friendRequesteeIds;
	NSString* _source;
	NSArray* _warnAckForIds;
	NSString* _peopleYouMayKnowLocation;
	NSArray* _refs;
	NSString* _location;

}

@property (nonatomic,copy) NSString * clientMutationId;                      //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                               //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * friendRequesteeIds;                     //@synthesize friendRequesteeIds=_friendRequesteeIds - In the implementation block
@property (nonatomic,copy) NSString * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSArray * warnAckForIds;                          //@synthesize warnAckForIds=_warnAckForIds - In the implementation block
@property (nonatomic,copy) NSString * peopleYouMayKnowLocation;              //@synthesize peopleYouMayKnowLocation=_peopleYouMayKnowLocation - In the implementation block
@property (nonatomic,copy) NSArray * refs;                                   //@synthesize refs=_refs - In the implementation block
@property (nonatomic,copy) NSString * location;                              //@synthesize location=_location - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(void)setFriendRequesteeIds:(NSArray *)arg1 ;
-(void)setPeopleYouMayKnowLocation:(NSString *)arg1 ;
-(void)setWarnAckForIds:(NSArray *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)friendRequesteeIds;
-(NSArray *)warnAckForIds;
-(NSString *)peopleYouMayKnowLocation;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)location;
-(NSString *)source;
-(void)setLocation:(NSString *)arg1 ;
-(void)setRefs:(NSArray *)arg1 ;
-(NSArray *)refs;
@end
