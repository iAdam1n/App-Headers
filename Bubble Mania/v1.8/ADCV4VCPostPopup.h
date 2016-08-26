/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ADCViewElement.h>

@class UIView, UIImageView, UILabel, NSString;

@interface ADCV4VCPostPopup : ADCViewElement {

	UIView* dialog;
	UIView* background;
	UIImageView* background_logo;
	UIImageView* dialog_background;
	UIImageView* dialog_logo;
	UILabel* label_view;
	NSString* label_reward;
	NSString* label_fraction;
	NSString* label_rgba;
	NSString* label_shadow_rgba;
	int dialog_logo_width;
	int dialog_logo_height;
	int dialog_logo_scale;
	int background_logo_width;
	int background_logo_height;
	int background_logo_scale;
	id ad;

}

@property (assign,nonatomic) id ad; 
-(void)setAd:(id)arg1 ;
-(id)init:(id)arg1 inAd:(id)arg2 ;
-(void)layout:(id)arg1 ;
-(BOOL)show:(id)arg1 ;
-(void)reset;
-(id)ad;
@end
