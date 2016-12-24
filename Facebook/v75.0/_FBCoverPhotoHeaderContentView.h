/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBKVOController, FBCoverPhotoHeaderAvatarView, FBRichTextView, UIImageView, UIView;

@interface _FBCoverPhotoHeaderContentView : UIView {

	FBKVOController* _KVOController;
	FBCoverPhotoHeaderAvatarView* _imageView;
	unsigned long long _style;
	FBRichTextView* _richTitleLabel;
	FBRichTextView* _subtitleLabel;
	UIEdgeInsets _contentEdgeInsets;
	UIImageView* _imageViewOverlay;
	UIView* _titleDecorationView;
	UIView* _accessoryView;
	unsigned long long _verifiedType;
	unsigned long long _labelAlignment;

}

@property (nonatomic,readonly) FBCoverPhotoHeaderAvatarView * imageView; 
@property (nonatomic,retain) UIImageView * imageViewOverlay;                          //@synthesize imageViewOverlay=_imageViewOverlay - In the implementation block
@property (nonatomic,readonly) BOOL imageViewLoaded; 
@property (nonatomic,retain) UIView * titleDecorationView;                            //@synthesize titleDecorationView=_titleDecorationView - In the implementation block
@property (nonatomic,readonly) BOOL titleLabelLoaded; 
@property (nonatomic,readonly) FBRichTextView * richTitleLabel; 
@property (nonatomic,readonly) FBRichTextView * subtitleLabel; 
@property (nonatomic,readonly) BOOL subtitleLabelLoaded; 
@property (nonatomic,retain) UIView * accessoryView;                                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) unsigned long long verifiedType;                         //@synthesize verifiedType=_verifiedType - In the implementation block
@property (assign,nonatomic) unsigned long long labelAlignment;                       //@synthesize labelAlignment=_labelAlignment - In the implementation block
-(FBRichTextView *)richTitleLabel;
-(void)setImageViewOverlayImage:(id)arg1 ;
-(CGRect)_labelRectForContentRect:(CGRect)arg1 ;
-(void)_configureRichTextLabel:(id)arg1 ;
-(CGRect)_imageRectForContentRect:(CGRect)arg1 ;
-(CGRect)_accessoryRectForContentRect:(CGRect)arg1 combinedLabelFrame:(CGRect)arg2 ;
-(CGRect)_imageOverlayRectForImageFrame:(CGRect)arg1 ;
-(BOOL)imageViewLoaded;
-(void)setTitleDecorationView:(UIView *)arg1 ;
-(BOOL)titleLabelLoaded;
-(void)setVerifiedType:(unsigned long long)arg1 ;
-(BOOL)subtitleLabelLoaded;
-(UIImageView *)imageViewOverlay;
-(void)setImageViewOverlay:(UIImageView *)arg1 ;
-(UIView *)titleDecorationView;
-(unsigned long long)verifiedType;
-(void)layoutSubviews;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(FBCoverPhotoHeaderAvatarView *)imageView;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(FBRichTextView *)subtitleLabel;
-(void)_imageDidChange;
-(unsigned long long)labelAlignment;
-(void)setLabelAlignment:(unsigned long long)arg1 ;
@end
