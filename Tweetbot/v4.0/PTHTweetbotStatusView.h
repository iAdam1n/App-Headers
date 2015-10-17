/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>
#import <Tweetbot/PTHTweetbotEntityTextLabelDelegate.h>
#import <Tweetbot/PTHTweetbotStatusMediaViewDelegate.h>

@class PTHTweetbotStatus, PTHTweetbotStatusAvatarView, PTHTweetbotStatusTitleView, PTHTweetbotEntityTextLabel, PTHTweetbotStatusRetweetView, PTHTweetbotStatusMediaView, PTHTweetbotStatusQuotedStatusView, PTHTweetbotStatusViewLayout, UIView, UIViewController, PTHTweetbotEntityTextFontAppearance, PTHTweetbotEntityTextColorAppearance, NSString;

@interface PTHTweetbotStatusView : UIView <PTHTweetbotEntityTextLabelDelegate, PTHTweetbotStatusMediaViewDelegate> {

	PTHTweetbotStatus* _status;
	PTHTweetbotStatusAvatarView* _avatarView;
	PTHTweetbotStatusTitleView* _titleView;
	PTHTweetbotEntityTextLabel* _entityTextLabel;
	PTHTweetbotStatusRetweetView* _retweetView;
	PTHTweetbotStatusMediaView* _mediaView;
	PTHTweetbotStatusQuotedStatusView* _quotedStatusView;
	PTHTweetbotStatusViewLayout* _layout;
	long long _imageType;
	UIView* _topSeparatorLine;
	UIView* _bottomSeparatorLine;
	BOOL _showMedia;
	BOOL _showRetweet;
	UIViewController* _viewController;
	unsigned long long _topSeparatorStyle;
	unsigned long long _bottomSeparatorStyle;
	PTHTweetbotEntityTextFontAppearance* _fontAppearance;
	PTHTweetbotEntityTextColorAppearance* _colorAppearance;
	Class _layoutClass;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned long long topSeparatorStyle;                                //@synthesize topSeparatorStyle=_topSeparatorStyle - In the implementation block
@property (assign,nonatomic) unsigned long long bottomSeparatorStyle;                             //@synthesize bottomSeparatorStyle=_bottomSeparatorStyle - In the implementation block
@property (assign,nonatomic) BOOL hideTime; 
@property (assign,nonatomic) BOOL ignoresPlaceTouch; 
@property (nonatomic,retain) PTHTweetbotStatus * status;                                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long imageType;                                                 //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextFontAppearance * fontAppearance;                //@synthesize fontAppearance=_fontAppearance - In the implementation block
@property (nonatomic,retain) PTHTweetbotEntityTextColorAppearance * colorAppearance;              //@synthesize colorAppearance=_colorAppearance - In the implementation block
@property (assign,nonatomic) Class layoutClass;                                                   //@synthesize layoutClass=_layoutClass - In the implementation block
@property (nonatomic,readonly) PTHTweetbotStatusViewLayout * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaStatusView:(id)arg1 ;
-(void)setLayoutClass:(Class)arg1 ;
-(void)colorAppearanceDidChange;
-(void)fontAppearanceDidChange;
-(PTHTweetbotEntityTextFontAppearance *)fontAppearance;
-(void)statusMediaView:(id)arg1 didLongPress:(id)arg2 ;
-(PTHTweetbotEntityTextColorAppearance *)colorAppearance;
-(void)statusMediaView:(id)arg1 didTouchUpMedium:(id)arg2 ;
-(void)setBottomSeparatorStyle:(unsigned long long)arg1 ;
-(unsigned long long)bottomSeparatorStyle;
-(void)setFontAppearance:(PTHTweetbotEntityTextFontAppearance *)arg1 ;
-(void)setColorAppearance:(PTHTweetbotEntityTextColorAppearance *)arg1 ;
-(void)setTopSeparatorStyle:(unsigned long long)arg1 ;
-(id)sourceItem;
-(void)entityTextLabel:(id)arg1 didTouchUpEntity:(id)arg2 entityFrame:(CGRect)arg3 ;
-(void)entityTextLabel:(id)arg1 didTouchUpPlace:(CGRect)arg2 ;
-(void)entityTextLabel:(id)arg1 didLongPressEntity:(id)arg2 entityFrame:(CGRect)arg3 ;
-(void)_avatarTapped:(id)arg1 ;
-(void)_avatarLongPress:(id)arg1 ;
-(void)_quoteTapped:(id)arg1 ;
-(void)_retweetTapped:(id)arg1 ;
-(void)_retweetLongPress:(id)arg1 ;
-(void)_resetDisplay;
-(void)_updateRetweetIfNeeded:(id)arg1 ;
-(void)_updateRetweet;
-(BOOL)hideTime;
-(void)setHideTime:(BOOL)arg1 ;
-(BOOL)ignoresPlaceTouch;
-(void)setIgnoresPlaceTouch:(BOOL)arg1 ;
-(unsigned long long)topSeparatorStyle;
-(void)_longPress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(PTHTweetbotStatusViewLayout *)layout;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setLayout:(PTHTweetbotStatusViewLayout *)arg1 ;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
-(void)setImageType:(long long)arg1 ;
-(long long)imageType;
-(Class)layoutClass;
@end
