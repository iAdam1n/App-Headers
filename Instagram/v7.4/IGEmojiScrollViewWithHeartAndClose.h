/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGEmojiScrollView.h>

@protocol IGEmojiScrollViewWithHeartAndCloseDelegate;
@class NSArray, UIButton;

@interface IGEmojiScrollViewWithHeartAndClose : IGEmojiScrollView {

	NSArray* _customEmojiButtonsAray;
	id<IGEmojiScrollViewWithHeartAndCloseDelegate> _emojiDelegate;
	UIButton* _closeButton;
	UIButton* _likeButton;

}

@property (assign,nonatomic,__weak) id<IGEmojiScrollViewWithHeartAndCloseDelegate> emojiDelegate;              //@synthesize emojiDelegate=_emojiDelegate - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                           //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIButton * likeButton;                                                            //@synthesize likeButton=_likeButton - In the implementation block
-(UIButton *)likeButton;
-(void)setEmojiDelegate:(id<IGEmojiScrollViewWithHeartAndCloseDelegate>)arg1 ;
-(void)hideLikeButton:(BOOL)arg1 ;
-(void)setLikeButton:(UIButton *)arg1 ;
-(id)emojiButtonsArray;
-(id<IGEmojiScrollViewWithHeartAndCloseDelegate>)emojiDelegate;
-(void)setEmojiButtonsArray:(id)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(void)likeButtonTapped:(id)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIButton *)closeButton;
@end

