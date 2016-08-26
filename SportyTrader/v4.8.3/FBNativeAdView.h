/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>
#import <SportyTrader/FBNativeAdDelegate.h>
#import <SportyTrader/FBNativeAdView.h>

@protocol FBNativeAdView <NSObject>
@required
-(id)allInteractableTargets;
-(void)populate:(id)arg1;

@end

#import <SportyTrader/FBAdUpdatableView.h>

@class UIViewController, FBNativeAd, FBNativeAdViewAttributes, UIButton, UILabel, UIImageView, FBMediaView, FBAdChoicesView, FBAdBodyView, UIView, NSHashTable, FBAdNativeContentContainer, NSString;

@interface FBNativeAdView : UIView <FBNativeAdDelegate, FBNativeAdView, FBAdUpdatableView> {

	BOOL _loaded;
	long long _type;
	UIViewController* _viewController;
	FBNativeAd* _nativeAd;
	FBNativeAdViewAttributes* _attributes;
	UIButton* _callToActionButton;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _socialContextLabel;
	UIImageView* _iconImageView;
	FBMediaView* _coverImageView;
	FBAdChoicesView* _sponsoredView;
	FBAdBodyView* _bodyView;
	UIView* _containerView;
	NSHashTable* _clickableViews;
	NSHashTable* _excludedClickableViews;
	FBAdNativeContentContainer* _contentContainer;

}

@property (assign,nonatomic) long long type;                                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                          //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) FBNativeAd * nativeAd;                                             //@synthesize nativeAd=_nativeAd - In the implementation block
@property (nonatomic,copy) FBNativeAdViewAttributes * attributes;                               //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic,__weak) UIButton * callToActionButton;                              //@synthesize callToActionButton=_callToActionButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * descriptionLabel;                                 //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * socialContextLabel;                               //@synthesize socialContextLabel=_socialContextLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * iconImageView;                                //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic,__weak) FBMediaView * coverImageView;                               //@synthesize coverImageView=_coverImageView - In the implementation block
@property (assign,nonatomic,__weak) FBAdChoicesView * sponsoredView;                            //@synthesize sponsoredView=_sponsoredView - In the implementation block
@property (assign,nonatomic,__weak) FBAdBodyView * bodyView;                                    //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                     //@synthesize containerView=_containerView - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                                       //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) NSHashTable * clickableViews;                                      //@synthesize clickableViews=_clickableViews - In the implementation block
@property (nonatomic,retain) NSHashTable * excludedClickableViews;                              //@synthesize excludedClickableViews=_excludedClickableViews - In the implementation block
@property (assign,nonatomic,__weak) FBAdNativeContentContainer * contentContainer;              //@synthesize contentContainer=_contentContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nativeAdViewWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3 ;
+(Class)classFromType:(long long)arg1 ;
+(id)nativeAdViewWithNativeAd:(id)arg1 withType:(long long)arg2 ;
+(id)nativeAdViewWithType:(long long)arg1 withAttributes:(id)arg2 ;
+(id)defaultAttributes;
-(FBNativeAd *)nativeAd;
-(void)setNativeAd:(FBNativeAd *)arg1 ;
-(void)nativeAdDidLoad:(id)arg1 ;
-(UIButton *)callToActionButton;
-(void)setCallToActionButton:(UIButton *)arg1 ;
-(id)initWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3 ;
-(id)initWithNativeAd:(id)arg1 withType:(long long)arg2 ;
-(void)initializeView;
-(UILabel *)socialContextLabel;
-(void)updateView:(BOOL)arg1 ;
-(FBAdChoicesView *)sponsoredView;
-(FBMediaView *)coverImageView;
-(void)constructView;
-(void)registerView;
-(id)allInteractableTargets;
-(void)setCoverImageView:(FBMediaView *)arg1 ;
-(void)setSponsoredView:(FBAdChoicesView *)arg1 ;
-(void)setSocialContextLabel:(UILabel *)arg1 ;
-(void)setBodyView:(FBAdBodyView *)arg1 ;
-(void)setClickableViews:(NSHashTable *)arg1 ;
-(void)setExcludedClickableViews:(NSHashTable *)arg1 ;
-(void)constructCallToActionButton;
-(void)constructIconImageView;
-(void)constructCoverImageView;
-(void)constructSponsoredView;
-(void)constructBodyView;
-(void)updateClickableViews;
-(BOOL)usesMediaView;
-(NSHashTable *)clickableViews;
-(NSHashTable *)excludedClickableViews;
-(void)resetViews;
-(FBAdBodyView *)bodyView;
-(void)populate:(id)arg1 ;
-(BOOL)implementsSelector:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)reset;
-(void)setContainerView:(UIView *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)isLoaded;
-(FBNativeAdViewAttributes *)attributes;
-(void)setAttributes:(FBNativeAdViewAttributes *)arg1 ;
-(void)updateAttributes:(id)arg1 ;
-(id)fixedHeight;
-(FBAdNativeContentContainer *)contentContainer;
-(void)setContentContainer:(FBAdNativeContentContainer *)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end
