/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBCommerceStoreUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _graphQLID;
	NSString* _introSummary;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * graphQLID;                     //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * introSummary;                  //@synthesize introSummary=_introSummary - In the implementation block
-(void)setGraphQLID:(NSString *)arg1 ;
-(NSString *)graphQLID;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setIntroSummary:(NSString *)arg1 ;
-(NSString *)introSummary;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
@end

