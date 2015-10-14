/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class PTHTweetbotUser, UIImage, NSString, UIColor, NSURL;

@interface PTHTweetbotAvatarView : UIControl {

	BOOL _animate;
	PTHTweetbotUser* _user;
	UIImage* _userImage;
	double _avatarInset;
	double _cornerRadius;
	double _avatarDiameter;
	long long _avatarType;
	NSString* _overlayColorName;
	UIColor* _overlayColor;
	NSString* _highlightColorName;
	UIColor* _highlightColor;
	NSString* _strokeColorName;
	UIColor* _strokeColor;
	NSString* _fillColorName;
	UIColor* _fillColor;
	NSURL* _imageURL;

}

@property (nonatomic,retain) PTHTweetbotUser * user;                     //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UIImage * userImage;                        //@synthesize userImage=_userImage - In the implementation block
@property (assign,nonatomic) double avatarInset;                         //@synthesize avatarInset=_avatarInset - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double avatarDiameter;                      //@synthesize avatarDiameter=_avatarDiameter - In the implementation block
@property (assign,nonatomic) long long avatarType;                       //@synthesize avatarType=_avatarType - In the implementation block
@property (nonatomic,readonly) long long currentAvatarType; 
@property (nonatomic,copy) NSString * overlayColorName;                  //@synthesize overlayColorName=_overlayColorName - In the implementation block
@property (nonatomic,retain) UIColor * overlayColor;                     //@synthesize overlayColor=_overlayColor - In the implementation block
@property (nonatomic,copy) NSString * highlightColorName;                //@synthesize highlightColorName=_highlightColorName - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) NSString * strokeColorName;                   //@synthesize strokeColorName=_strokeColorName - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                      //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy) NSString * fillColorName;                     //@synthesize fillColorName=_fillColorName - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL animate;                               //@synthesize animate=_animate - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
-(double)avatarInset;
-(void)setAvatarInset:(double)arg1 ;
-(UIImage *)userImage;
-(void)setAvatarDiameter:(double)arg1 ;
-(void)setHighlightColorName:(NSString *)arg1 ;
-(void)setFillColorName:(NSString *)arg1 ;
-(double)avatarDiameter;
-(void)setUserImage:(UIImage *)arg1 ;
-(long long)currentAvatarType;
-(void)setOverlayColorName:(NSString *)arg1 ;
-(void)setAvatarType:(long long)arg1 ;
-(long long)avatarType;
-(NSString *)overlayColorName;
-(NSString *)highlightColorName;
-(void)colorThemeDidChange;
-(NSString *)fillColorName;
-(void)setStrokeColorName:(NSString *)arg1 ;
-(NSString *)strokeColorName;
-(PTHTweetbotUser *)user;
-(void)setUser:(PTHTweetbotUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_update;
-(BOOL)animate;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(UIColor *)overlayColor;
-(id)accessibilityValue;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setAnimate:(BOOL)arg1 ;
@end

