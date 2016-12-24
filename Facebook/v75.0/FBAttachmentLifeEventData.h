/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBDateInput, FBAttachmentLifeEventExtraData;

@interface FBAttachmentLifeEventData : FBGraphQLInput {

	NSString* _icon;
	NSString* _source;
	NSString* _lifeEventType;
	FBDateInput* _startDate;
	FBAttachmentLifeEventExtraData* _extras;

}

@property (nonatomic,copy) NSString * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * lifeEventType;                             //@synthesize lifeEventType=_lifeEventType - In the implementation block
@property (nonatomic,copy) FBDateInput * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) FBAttachmentLifeEventExtraData * extras;              //@synthesize extras=_extras - In the implementation block
-(void)setExtras:(FBAttachmentLifeEventExtraData *)arg1 ;
-(FBAttachmentLifeEventExtraData *)extras;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)lifeEventType;
-(void)setLifeEventType:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)icon;
-(void)setStartDate:(FBDateInput *)arg1 ;
-(FBDateInput *)startDate;
@end
