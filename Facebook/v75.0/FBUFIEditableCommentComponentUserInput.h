/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBUFIEditableCommentComponentUserInput : FBValueObject <NSCopying> {

	NSString* _text;
	NSArray* _mentions;
	NSArray* _hashtags;

}

@property (nonatomic,copy,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mentions;              //@synthesize mentions=_mentions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hashtags;              //@synthesize hashtags=_hashtags - In the implementation block
-(NSArray *)hashtags;
-(BOOL)isEqualToMemTextWithEntities:(id)arg1 ;
-(id)initWithText:(id)arg1 mentions:(id)arg2 hashtags:(id)arg3 ;
-(NSString *)text;
-(NSArray *)mentions;
@end

