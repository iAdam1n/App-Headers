/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/POPPropertyAnimation.h>

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (assign,nonatomic) double duration; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction; 
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)easeInAnimation;
+(id)linearAnimation;
+(id)easeOutAnimation;
+(id)easeInEaseOutAnimation;
+(id)defaultAnimation;
+(id)animation;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)init;
-(double)duration;
-(CAMediaTimingFunction *)timingFunction;
-(void)setDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

