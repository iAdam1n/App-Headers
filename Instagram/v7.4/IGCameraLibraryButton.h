/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, IGSimpleButton;

@interface IGCameraLibraryButton : UIView {

	long long _assetType;
	UIImageView* _imageView;
	IGSimpleButton* _button;

}

@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long assetType;                  //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGSimpleButton * button;              //@synthesize button=_button - In the implementation block
-(void)setImageToLastLibraryImage;
-(IGSimpleButton *)button;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(BOOL)enabled;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithAssetType:(long long)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setButton:(IGSimpleButton *)arg1 ;
-(void)setAssetType:(long long)arg1 ;
-(long long)assetType;
@end

