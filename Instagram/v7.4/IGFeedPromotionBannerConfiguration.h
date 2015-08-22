/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/SKStoreProductViewControllerDelegate.h>

@class NSString, NSURL, UIImage, NSMutableAttributedString, NSAttributedString;

@interface IGFeedPromotionBannerConfiguration : NSObject <SKStoreProductViewControllerDelegate> {

	BOOL _showDismissButton;
	BOOL _promotionDismissed;
	NSString* _title;
	NSString* _subtitle;
	NSString* _buttonText;
	long long _feedPromotionBannerType;
	NSURL* _iconURL;
	UIImage* _icon;
	/*^block*/id _cellTapActionBlock;
	/*^block*/id _cellImpressionActionBlock;
	/*^block*/id _cellDismssActionBlock;
	/*^block*/id _cellPromotionButtonTappedActionBlock;
	NSMutableAttributedString* _mutableCenterText;
	NSString* _appId;

}

@property (nonatomic,readonly) NSAttributedString * centerText; 
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                                      //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) long long feedPromotionBannerType;                          //@synthesize feedPromotionBannerType=_feedPromotionBannerType - In the implementation block
@property (assign,nonatomic) BOOL showDismissButton;                                     //@synthesize showDismissButton=_showDismissButton - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                            //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                             //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL promotionDismissed;                                    //@synthesize promotionDismissed=_promotionDismissed - In the implementation block
@property (nonatomic,copy) id cellTapActionBlock;                                        //@synthesize cellTapActionBlock=_cellTapActionBlock - In the implementation block
@property (nonatomic,copy) id cellImpressionActionBlock;                                 //@synthesize cellImpressionActionBlock=_cellImpressionActionBlock - In the implementation block
@property (nonatomic,copy) id cellDismssActionBlock;                                     //@synthesize cellDismssActionBlock=_cellDismssActionBlock - In the implementation block
@property (nonatomic,copy) id cellPromotionButtonTappedActionBlock;                      //@synthesize cellPromotionButtonTappedActionBlock=_cellPromotionButtonTappedActionBlock - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * mutableCenterText;              //@synthesize mutableCenterText=_mutableCenterText - In the implementation block
@property (nonatomic,retain) NSString * appId;                                           //@synthesize appId=_appId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logForAction:(id)arg1 reason:(id)arg2 type:(id)arg3 ;
+(id)iconImageForPromotionType:(long long)arg1 ;
+(id)stringForPromotionType:(long long)arg1 ;
-(id)initWithButtonText:(id)arg1 centerText:(id)arg2 icon:(id)arg3 ;
-(void)setFeedPromotionBannerType:(long long)arg1 ;
-(void)setupActionBlockForHyperlapse;
-(void)setupActionBlockForLayout;
-(BOOL)showDismissButton;
-(long long)feedPromotionBannerType;
-(id)cellTapActionBlock;
-(void)buildCenterTextWithTextRuns:(id)arg1 ;
-(void)setMutableCenterText:(NSMutableAttributedString *)arg1 ;
-(NSMutableAttributedString *)mutableCenterText;
-(void)logBannerImpression;
-(void)setCellImpressionActionBlock:(id)arg1 ;
-(void)logBannerDismissal;
-(void)setCellDismssActionBlock:(id)arg1 ;
-(void)setCellPromotionButtonTappedActionBlock:(id)arg1 ;
-(void)logBannerButtonTapped;
-(void)setCellTapActionBlock:(id)arg1 ;
-(id)cellPromotionButtonTappedActionBlock;
-(void)setPromotionDismissed:(BOOL)arg1 ;
-(void)setupActionBlockForFollowDestination;
-(void)setShowDismissButton:(BOOL)arg1 ;
-(void)setupActionBlocksForPromotionWithType:(long long)arg1 ;
-(id)nameOfFeedPromotionBannerType;
-(NSAttributedString *)centerText;
-(BOOL)promotionDismissed;
-(id)cellImpressionActionBlock;
-(id)cellDismssActionBlock;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)reuseIdentifier;
-(NSString *)subtitle;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(NSURL *)iconURL;
@end
