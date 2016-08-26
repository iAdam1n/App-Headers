/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface CBTagNew : NSObject {

	NSNumber* _tagId;
	NSString* _title;
	NSString* _value;

}

@property (nonatomic,retain) NSNumber * tagId;                  //@synthesize tagId=_tagId - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * hashTag; 
+(id)tagWithAttributes:(id)arg1 ;
-(void)setTagId:(NSNumber *)arg1 ;
-(NSString *)hashTag;
-(NSNumber *)tagId;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
@end
