/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/ADCViewElement.h>

@class UIButton, NSString, UIView;

@interface ADCHTML5EndCardButton : ADCViewElement {

	BOOL _enabled;
	UIButton* _button;
	NSString* _click_action;
	NSString* _click_action_type;
	UIView* _owner;
	int _position;
	id _ad;

}

@property (assign,nonatomic) id ad;              //@synthesize ad=_ad - In the implementation block
-(void)setAd:(id)arg1 ;
-(void)buttonPushed:(id)arg1 ;
-(id)init:(id)arg1 inAd:(id)arg2 withPosition:(int)arg3 ;
-(void)layout:(id)arg1 ;
-(void)freePlaybackResources;
-(BOOL)show:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)update:(id)arg1 ;
-(id)ad;
@end

