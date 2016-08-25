/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/ADCViewElement.h>

@class UIButton, NSString;

@interface ADCV4VCButton : ADCViewElement {

	UIButton* _button;
	BOOL _enabled;
	int _position;
	NSString* _label;
	NSString* _label_rgba;
	NSString* _label_shadow_rgba;
	NSString* _click_action;
	NSString* _click_action_type;
	id _ad;

}

@property (assign,nonatomic) id ad;              //@synthesize ad=_ad - In the implementation block
-(void)setAd:(id)arg1 ;
-(id)init:(id)arg1 withPosition:(int)arg2 inAd:(id)arg3 ;
-(void)buttonPushed;
-(void)layout:(id)arg1 ;
-(BOOL)show:(id)arg1 ;
-(void)reset;
-(id)ad;
@end

