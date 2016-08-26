/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FBContactSearchQuery : FBValueObject <NSCopying> {

	NSString* _text;
	NSSet* _pickedIds;

}

@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSSet * pickedIds;              //@synthesize pickedIds=_pickedIds - In the implementation block
-(id)initWithText:(id)arg1 pickedIds:(id)arg2 ;
-(NSSet *)pickedIds;
-(NSString *)text;
@end
