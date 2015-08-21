/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTappableImageView.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>

@protocol TFNDirectMessageConversation;
@class UIImageView, TFNTwitterUser, UIImage, UIColor, NSString;

@interface T1DirectMessageAvatarImageView : TFNTappableImageView <TFNLayoutMetricsEnvironment> {

	UIImageView* _pressedView;
	long long _avatarSizeClass;
	long long _style;
	id<TFNDirectMessageConversation> _conversation;
	TFNTwitterUser* _user;
	UIImage* _iconImage;
	UIColor* _fillColor;
	double _scaleFactor;

}

@property (assign,nonatomic) long long avatarSizeClass;                                  //@synthesize avatarSizeClass=_avatarSizeClass - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) id<TFNDirectMessageConversation> conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TFNTwitterUser * user;                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                        //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                        //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) CGSize avatarSize; 
@property (assign,nonatomic) double scaleFactor;                                         //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) UIImageView * pressedView;                                //@synthesize pressedView=_pressedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)avatarSize:(CGSize)arg1 scaledByFactor:(double)arg2 ;
+(id)_pressedViewWithSize:(CGSize)arg1 style:(long long)arg2 ;
+(double)_cornerRadiusForBounds:(CGRect)arg1 style:(long long)arg2 ;
-(void)layoutMetricsDidChange:(id)arg1 ;
-(CGSize)avatarSize;
-(void)pressTouchDetector:(id)arg1 pressBegan:(id)arg2 withEvent:(id)arg3 ;
-(void)pressTouchDetector:(id)arg1 pressEnded:(id)arg2 withEvent:(id)arg3 forGestureType:(long long)arg4 ;
-(id)initWithAvatarSize:(long long)arg1 conversation:(id)arg2 user:(id)arg3 ;
-(void)setAvatarSizeClass:(long long)arg1 ;
-(void)_updateWithConversation:(id)arg1 ;
-(void)_updateWithUser:(id)arg1 ;
-(void)_conversationAvatarImageDidUpdate:(id)arg1 ;
-(void)_userProfileImageDidUpdate:(id)arg1 ;
-(CGSize)_calculatedAvatarImageSize;
-(UIImageView *)pressedView;
-(long long)avatarSizeClass;
-(void)setScaleFactor:(double)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(long long)style;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setStyle:(long long)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)scaleFactor;
-(UIImage *)iconImage;
-(void)setConversation:(id<TFNDirectMessageConversation>)arg1 ;
-(id<TFNDirectMessageConversation>)conversation;
-(void)_setup;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(void)_refresh;
@end

