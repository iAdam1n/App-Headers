/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBStoryCreateInputDataAttachmentsLifeEventStartDate : FBGraphQLInput {

	NSNumber* _year;
	NSNumber* _month;
	NSNumber* _day;

}

@property (nonatomic,copy) NSNumber * year;               //@synthesize year=_year - In the implementation block
@property (nonatomic,copy) NSNumber * month;              //@synthesize month=_month - In the implementation block
@property (nonatomic,copy) NSNumber * day;                //@synthesize day=_day - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setDay:(NSNumber *)arg1 ;
-(NSNumber *)year;
-(NSNumber *)month;
-(NSNumber *)day;
-(void)setYear:(NSNumber *)arg1 ;
-(void)setMonth:(NSNumber *)arg1 ;
@end

