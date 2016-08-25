/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/ADCViewElement.h>

@class UIView, UIImageView, UILabel, NSString;

@interface ADCV4VCPrePopup : ADCViewElement {

	UIView* _background;
	UIImageView* _background_logo;
	int _background_logo_width;
	int _background_logo_height;
	int _background_logo_scale;
	UILabel* _label_view;
	NSString* _label_reward;
	NSString* _label_fraction;
	NSString* _label_rgba;
	NSString* _label_shadow_rgba;
	UIView* _dialog;
	UIImageView* _dialog_background;
	UIImageView* _dialog_logo;
	int _dialog_logo_width;
	int _dialog_logo_height;
	int _dialog_logo_scale;
	id _ad;

}

@property (assign,nonatomic) id ad;              //@synthesize ad=_ad - In the implementation block
-(void)setAd:(id)arg1 ;
-(id)init:(id)arg1 inAd:(id)arg2 ;
-(void)layout:(id)arg1 ;
-(BOOL)show:(id)arg1 ;
-(void)reset;
-(void)update:(id)arg1 ;
-(id)ad;
@end

