/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate, NSString;

@interface FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfo : FBGraphQLInput {

	FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate* _endDate;
	NSString* _current;
	NSString* _employerId;

}

@property (nonatomic,copy) FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate * endDate;              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * current;                                                                     //@synthesize current=_current - In the implementation block
@property (nonatomic,copy) NSString * employerId;                                                                  //@synthesize employerId=_employerId - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)employerId;
-(void)setEmployerId:(NSString *)arg1 ;
-(void)setEndDate:(FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate *)arg1 ;
-(NSString *)current;
-(void)setCurrent:(NSString *)arg1 ;
-(FBStoryCreateInputDataAttachmentsLifeEventExtrasWorkInfoEndDate *)endDate;
@end

