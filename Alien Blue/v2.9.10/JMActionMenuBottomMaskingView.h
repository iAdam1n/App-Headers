/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface JMActionMenuBottomMaskingView : UIView {

	UIImageView* _maskImageView;
	UIImageView* _shadowView;

}

@property (retain) UIImageView * maskImageView;              //@synthesize maskImageView=_maskImageView - In the implementation block
@property (retain) UIImageView * shadowView;                 //@synthesize shadowView=_shadowView - In the implementation block
-(void)setMaskImageView:(UIImageView *)arg1 ;
-(UIImageView *)maskImageView;
-(void)setMaskingBackgroundImage:(id)arg1 maskingRect:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)shadowView;
-(void)setShadowView:(UIImageView *)arg1 ;
@end

