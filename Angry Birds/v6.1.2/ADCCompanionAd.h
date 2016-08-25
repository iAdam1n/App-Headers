/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/ADCViewElement.h>

@class UIImageView, NSDate;

@interface ADCCompanionAd : ADCViewElement {

	BOOL enabled_;
	double delay;
	UIImageView* background;
	BOOL native_enabled;
	double display_time;
	NSDate* last_display_time_update;
	BOOL dissolve;
	double dissolve_delay;
	BOOL started_dissolve;
	BOOL prevent_dissolve;
	BOOL _enabled;
	id _ad;

}

@property (assign,nonatomic) id ad;                       //@synthesize ad=_ad - In the implementation block
@property (nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)isHTML5:(id)arg1 ;
-(void)setAd:(id)arg1 ;
-(void)trackDisplayTime;
-(id)init:(id)arg1 inAd:(id)arg2 ;
-(void)willHideEndCard;
-(void)prepare_html5:(id)arg1 ;
-(void)layout:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)show:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)reset;
-(void)update:(id)arg1 ;
-(id)ad;
-(BOOL)ready;
@end

