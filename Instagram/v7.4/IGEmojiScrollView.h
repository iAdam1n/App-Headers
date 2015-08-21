/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol IGEmojiScrollViewDelegate;
@class NSArray, UIFont;

@interface IGEmojiScrollView : UIScrollView {

	id<IGEmojiScrollViewDelegate> _emojiDelegate;
	NSArray* _emojisArray;
	UIFont* _emojiFont;
	NSArray* _emojiButtonsArray;

}

@property (assign,nonatomic,__weak) id<IGEmojiScrollViewDelegate> emojiDelegate;              //@synthesize emojiDelegate=_emojiDelegate - In the implementation block
@property (nonatomic,retain) NSArray * emojisArray;                                           //@synthesize emojisArray=_emojisArray - In the implementation block
@property (nonatomic,retain) UIFont * emojiFont;                                              //@synthesize emojiFont=_emojiFont - In the implementation block
@property (nonatomic,retain) NSArray * emojiButtonsArray;                                     //@synthesize emojiButtonsArray=_emojiButtonsArray - In the implementation block
-(void)setEmojiDelegate:(id<IGEmojiScrollViewDelegate>)arg1 ;
-(BOOL)isAtInitialPosition;
-(void)scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(NSArray *)emojiButtonsArray;
-(void)updateContentSizeAndLayoutButtons;
-(id<IGEmojiScrollViewDelegate>)emojiDelegate;
-(NSArray *)emojisArray;
-(UIFont *)emojiFont;
-(void)emojiButtonTapped:(id)arg1 ;
-(void)setEmojisArray:(NSArray *)arg1 ;
-(void)setEmojiFont:(UIFont *)arg1 ;
-(void)setEmojiButtonsArray:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)initialPosition;
@end

