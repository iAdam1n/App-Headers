/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString, MKHeadTypingViewStylesheet, MKImageView, UILabel;

@interface MKHeadTypingView : UIView {

	BOOL _isAnimating;
	BOOL _isPresenting;
	BOOL _isHiding;
	UIImage* _avatarImage;
	NSString* _title;
	MKHeadTypingViewStylesheet* _stylesheet;
	MKImageView* _avatarImageView;
	UILabel* _typingLabel;

}

@property (nonatomic,retain) MKHeadTypingViewStylesheet * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,retain) MKImageView * avatarImageView;                        //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,retain) UILabel * typingLabel;                                //@synthesize typingLabel=_typingLabel - In the implementation block
@property (nonatomic,retain) UIImage * avatarImage;                                //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL isAnimating;                                   //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,readonly) BOOL isPresenting;                                  //@synthesize isPresenting=_isPresenting - In the implementation block
@property (nonatomic,readonly) BOOL isHiding;                                      //@synthesize isHiding=_isHiding - In the implementation block
+(id)chatHeadTypingViewWithFrame:(CGRect)arg1 ;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(UIImage *)avatarImage;
-(void)mk_commonInit;
-(MKImageView *)avatarImageView;
-(void)setAvatarImageView:(MKImageView *)arg1 ;
-(double)offsetForAnimation;
-(UILabel *)typingLabel;
-(void)scrollAvatarImageWithParallaxEffect:(double)arg1 ;
-(void)setTypingLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isAnimating;
-(BOOL)isHiding;
-(void)hideWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isPresenting;
-(MKHeadTypingViewStylesheet *)stylesheet;
-(void)setStylesheet:(MKHeadTypingViewStylesheet *)arg1 ;
@end
