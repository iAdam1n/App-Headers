/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIColor, UIImageView, UIFont, CAAnimation;

@interface MNNuxTraits : NSObject {

	BOOL _isRoundedNux;
	BOOL _showX;
	UIColor* _backgroundColor;
	UIImageView* _arrowImageView;
	UIFont* _font;
	CAAnimation* _iconAnimation;

}

@property (nonatomic,retain) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL isRoundedNux;                         //@synthesize isRoundedNux=_isRoundedNux - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;              //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (assign,nonatomic) BOOL showX;                                //@synthesize showX=_showX - In the implementation block
@property (nonatomic,retain) UIFont * font;                             //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) CAAnimation * iconAnimation;               //@synthesize iconAnimation=_iconAnimation - In the implementation block
-(BOOL)isRoundedNux;
-(BOOL)showX;
-(CAAnimation *)iconAnimation;
-(void)setIsRoundedNux:(BOOL)arg1 ;
-(void)setShowX:(BOOL)arg1 ;
-(void)setIconAnimation:(CAAnimation *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(UIImageView *)arrowImageView;
@end
