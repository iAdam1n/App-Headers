/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBQuickPromotionInterstitial.h>

@class NSString, UILabel, FBRichTextView, UIButton, FBQuickPromotionInterstitialConfiguration, UIImageView, FBUserSession, FBQuickPromotionCreativeView, FBQuickPromotionCardWithBlurredBackgroundView, FBQuickPromotionInterstitialHorizontalButtonBarView;

@interface FBQuickPromotionInterstitialCardView : UIView <FBQuickPromotionInterstitial> {

	UIImageView* _backgroundImageView;
	FBUserSession* _session;
	NSString* _promotionID;
	UIButton* _dismissButton;
	FBQuickPromotionCreativeView* _interstitialView;
	FBQuickPromotionCardWithBlurredBackgroundView* _cardView;
	FBQuickPromotionInterstitialHorizontalButtonBarView* _buttonBarView;

}

@property (nonatomic,retain) FBQuickPromotionCreativeView * interstitialView;                                  //@synthesize interstitialView=_interstitialView - In the implementation block
@property (nonatomic,retain) FBQuickPromotionCardWithBlurredBackgroundView * cardView;                         //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) FBQuickPromotionInterstitialHorizontalButtonBarView * buttonBarView;              //@synthesize buttonBarView=_buttonBarView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * promotionID;                                                             //@synthesize promotionID=_promotionID - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) FBRichTextView * subtitleTextView; 
@property (nonatomic,readonly) UIButton * primaryButton; 
@property (nonatomic,readonly) UIButton * secondaryButton; 
@property (nonatomic,readonly) UIButton * dismissButton;                                                       //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) FBRichTextView * socialContextView; 
@property (nonatomic,readonly) FBQuickPromotionInterstitialConfiguration * configuration; 
-(UIButton *)primaryButton;
-(UIButton *)secondaryButton;
-(BOOL)isTakeOverView;
-(void)unsetImage;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setAnimatedImageWithURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(NSString *)promotionID;
-(void)setPromotionID:(NSString *)arg1 ;
-(void)unsetFacepile;
-(void)setFacepileWithText:(id)arg1 imageURLs:(id)arg2 ;
-(FBRichTextView *)subtitleTextView;
-(FBRichTextView *)socialContextView;
-(void)setCardView:(FBQuickPromotionCardWithBlurredBackgroundView *)arg1 ;
-(FBQuickPromotionInterstitialHorizontalButtonBarView *)buttonBarView;
-(void)setButtonBarView:(FBQuickPromotionInterstitialHorizontalButtonBarView *)arg1 ;
-(FBQuickPromotionCardWithBlurredBackgroundView *)cardView;
-(CGSize)buttonBarSizeForCardBounds:(CGRect)arg1 ;
-(void)layoutButtonItemsForInterstitialSize:(CGSize)arg1 cardBounds:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(void)setBackgroundImage:(id)arg1 ;
-(FBQuickPromotionInterstitialConfiguration *)configuration;
-(FBQuickPromotionCreativeView *)interstitialView;
-(void)setInterstitialView:(FBQuickPromotionCreativeView *)arg1 ;
-(UIButton *)dismissButton;
@end

