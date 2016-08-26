/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaKitTopBottomBar.h>

@class UIImageView, UIView;

@interface SPBottomBar : FBMediaKitTopBottomBar {

	UIImageView* _backgroundImageView;
	unsigned long long _mediaPickerStyle;
	BOOL _enabled;
	UIView* _disableOverlayView;

}

@property (nonatomic,retain) UIView * disableOverlayView;              //@synthesize disableOverlayView=_disableOverlayView - In the implementation block
@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 mediaPickerStyle:(unsigned long long)arg2 ;
-(UIView *)disableOverlayView;
-(void)setDisableOverlayView:(UIView *)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
