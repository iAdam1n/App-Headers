/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationBar, UIView;

@interface FBMediaKitTopBottomBar : UIView {

	UINavigationBar* _navigationBar;
	double _alpha;
	UIView* _backgroundBlendingView;
	UIView* _buttomLine;
	unsigned long long _position;

}
+(double)defaultHeight;
-(void)setBarBackgroundViewHidden:(BOOL)arg1 ;
-(void)setDropShadowPosition:(unsigned long long)arg1 ;
-(void)setTintColorStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)alpha;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)setDropShadowColor:(id)arg1 ;
@end
