/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray, NSString, FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkDataCallToAction;

@interface FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkData : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _message;
	NSString* _imageHash;
	NSString* _picture;
	NSString* _link;
	NSString* _name;
	NSString* _descriptionText;
	FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkDataCallToAction* _callToAction;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;                                                                      //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                                       //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * imageHash;                                                                                     //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * picture;                                                                                       //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * link;                                                                                          //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                                                               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkDataCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkDataCallToAction *)callToAction;
-(void)setCallToAction:(FBBoostedComponentCreateInputDataCreativeObjectStorySpecLinkDataCallToAction *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)link;
-(void)setPicture:(NSString *)arg1 ;
-(NSString *)picture;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(NSString *)imageHash;
@end
