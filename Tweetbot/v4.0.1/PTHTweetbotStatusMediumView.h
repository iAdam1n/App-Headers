/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class PTHTweetbotMedium, UIImage, UIColor;

@interface PTHTweetbotStatusMediumView : UIView {

	BOOL _loading;
	unsigned long long _loadCount;
	BOOL _hasShadow;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _loadingDisabled;
	PTHTweetbotMedium* _medium;
	long long _imageType;
	UIImage* _image;
	UIColor* _shadowColor;
	UIColor* _mediaBackgroundColor;
	UIColor* _highlightOverlayColor;

}

@property (nonatomic,retain) PTHTweetbotMedium * medium;                         //@synthesize medium=_medium - In the implementation block
@property (assign,nonatomic) long long imageType;                                //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIColor * mediaBackgroundColor;                     //@synthesize mediaBackgroundColor=_mediaBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightOverlayColor;                    //@synthesize highlightOverlayColor=_highlightOverlayColor - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL loadingDisabled;                               //@synthesize loadingDisabled=_loadingDisabled - In the implementation block
-(void)setMedium:(PTHTweetbotMedium *)arg1 ;
-(UIColor *)mediaBackgroundColor;
-(void)setMediaBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightOverlayColor:(UIColor *)arg1 ;
-(void)setLoadingDisabled:(BOOL)arg1 ;
-(BOOL)loadingDisabled;
-(UIColor *)highlightOverlayColor;
-(void)_loadImageIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)shadowColor;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateShadow;
-(void)setImageType:(long long)arg1 ;
-(PTHTweetbotMedium *)medium;
-(long long)imageType;
@end

