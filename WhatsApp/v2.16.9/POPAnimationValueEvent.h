/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:06 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3 ;
-(void)_appendDescription:(id)arg1 ;
-(void)setVelocity:(id)arg1 ;
-(id)value;
-(id)velocity;
@end

