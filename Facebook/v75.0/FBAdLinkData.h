/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSArray, NSString, FBAdCallToAction;

@interface FBAdLinkData : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _message;
	NSString* _imageHash;
	NSString* _picture;
	NSString* _link;
	NSString* _name;
	NSString* _eventId;
	NSString* _offerId;
	NSString* _multiShareEndCard;
	NSString* _descriptionText;
	FBAdCallToAction* _callToAction;
	NSArray* _childAttachments;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * imageHash;                             //@synthesize imageHash=_imageHash - In the implementation block
@property (nonatomic,copy) NSString * picture;                               //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * link;                                  //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * eventId;                               //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy) NSString * offerId;                               //@synthesize offerId=_offerId - In the implementation block
@property (nonatomic,copy) NSString * multiShareEndCard;                     //@synthesize multiShareEndCard=_multiShareEndCard - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                       //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) FBAdCallToAction * callToAction;                  //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy) NSArray * childAttachments;                       //@synthesize childAttachments=_childAttachments - In the implementation block
-(FBAdCallToAction *)callToAction;
-(void)setCallToAction:(FBAdCallToAction *)arg1 ;
-(void)setChildAttachments:(NSArray *)arg1 ;
-(NSString *)offerId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setImageHash:(NSString *)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(void)setOfferId:(NSString *)arg1 ;
-(NSString *)multiShareEndCard;
-(void)setMultiShareEndCard:(NSString *)arg1 ;
-(NSArray *)childAttachments;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)picture;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)eventId;
-(void)setPicture:(NSString *)arg1 ;
-(NSString *)imageHash;
@end
