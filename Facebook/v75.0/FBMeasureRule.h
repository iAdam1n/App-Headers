/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, NSValue;

@interface FBMeasureRule : NSObject {

	NSString* _valueType;
	id _valueObject;
	NSValue* _value;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSValue * value;              //@synthesize value=_value - In the implementation block
+(id)ruleForSize:(CGSize)arg1 CGFloat:(double)arg2 ;
+(id)ruleForSize:(CGSize)arg1 CGSize:(CGSize)arg2 ;
+(id)ruleForSize:(CGSize)arg1 UIEdgeInsets:(UIEdgeInsets)arg2 ;
+(id)ruleForSize:(CGSize)arg1 integer:(long long)arg2 ;
+(id)ruleForSize:(CGSize)arg1 CGPoint:(CGPoint)arg2 ;
+(id)ruleForSize:(CGSize)arg1 CGRect:(CGRect)arg2 ;
+(id)ruleForSize:(CGSize)arg1 image:(id)arg2 ;
+(id)ruleForSize:(CGSize)arg1 value:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 value:(id)arg2 valueType:(id)arg3 ;
-(id)initWithSize:(CGSize)arg1 object:(id)arg2 valueType:(id)arg3 ;
-(CGSize)size;
-(NSValue *)value;
-(id)valueType;
@end
