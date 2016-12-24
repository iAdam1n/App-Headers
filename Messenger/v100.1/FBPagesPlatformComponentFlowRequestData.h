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

@interface FBPagesPlatformComponentFlowRequestData : FBGraphQLInput {

	NSString* _graphQLID;
	NSString* _initialInput;
	NSString* _referrer;

}

@property (nonatomic,copy) NSString * graphQLID;                 //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) NSString * initialInput;              //@synthesize initialInput=_initialInput - In the implementation block
@property (nonatomic,copy) NSString * referrer;                  //@synthesize referrer=_referrer - In the implementation block
-(NSString *)graphQLID;
-(void)setGraphQLID:(NSString *)arg1 ;
-(NSString *)initialInput;
-(void)setInitialInput:(NSString *)arg1 ;
-(void)setReferrer:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)referrer;
@end
