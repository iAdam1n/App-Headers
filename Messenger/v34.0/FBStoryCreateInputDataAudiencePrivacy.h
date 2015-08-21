/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBStoryCreateInputDataAudiencePrivacy : FBGraphQLInput {

	NSString* _baseState;
	NSArray* _allow;
	NSArray* _deny;
	NSString* _tagExpansionState;

}

@property (nonatomic,copy) NSString * baseState;                      //@synthesize baseState=_baseState - In the implementation block
@property (nonatomic,copy) NSArray * allow;                           //@synthesize allow=_allow - In the implementation block
@property (nonatomic,copy) NSArray * deny;                            //@synthesize deny=_deny - In the implementation block
@property (nonatomic,copy) NSString * tagExpansionState;              //@synthesize tagExpansionState=_tagExpansionState - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)baseState;
-(void)setBaseState:(NSString *)arg1 ;
-(void)setAllow:(NSArray *)arg1 ;
-(NSString *)tagExpansionState;
-(void)setTagExpansionState:(NSString *)arg1 ;
-(NSArray *)allow;
-(NSArray *)deny;
-(void)setDeny:(NSArray *)arg1 ;
@end

