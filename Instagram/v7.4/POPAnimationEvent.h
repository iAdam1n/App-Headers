/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:21 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface POPAnimationEvent : NSObject {

	unsigned long long _type;
	double _time;
	NSString* _animationDescription;

}

@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * animationDescription;              //@synthesize animationDescription=_animationDescription - In the implementation block
-(void)_appendDescription:(id)arg1 ;
-(NSString *)animationDescription;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 ;
-(void)setAnimationDescription:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)type;
-(double)time;
@end

