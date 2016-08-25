/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class UIImageView;

@interface JMGalleryToolbarItem : UIControl {

	/*^block*/id _onTap;
	UIImageView* _iconImageView;

}

@property (copy) id onTap;                                   //@synthesize onTap=_onTap - In the implementation block
@property (retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(id)initWithIconName:(id)arg1 highlightColor:(id)arg2 ;
-(void)tapped;
-(id)initWithImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(id)initWithIconName:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)onTap;
-(void)setOnTap:(id)arg1 ;
@end

