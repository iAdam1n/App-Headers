/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBItemView_DEPRECATED, UILongPressGestureRecognizer, FBPageBadgeView, NSString, UIColor, UIImage;

@interface FBPageActionableLinkView : UIView <UIGestureRecognizerDelegate> {

	FBItemView_DEPRECATED* _itemContentSummaryView;
	id _tapTarget;
	SEL _tapAction;
	CGPoint _locationInViewWhenTapBegan;
	UILongPressGestureRecognizer* _longPressRecognizer;
	FBPageBadgeView* _badgeView;
	BOOL _hasDisclosureIcon;
	unsigned long long _badgeValue;
	unsigned long long _badgeStyle;
	NSString* _disclosureText;
	UIColor* _backgroundNormalColor;
	UIColor* _backgroundHighlightedColor;

}

@property (assign,nonatomic) unsigned long long badgeValue;                     //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) unsigned long long badgeStyle;                     //@synthesize badgeStyle=_badgeStyle - In the implementation block
@property (nonatomic,copy) NSString * disclosureText;                           //@synthesize disclosureText=_disclosureText - In the implementation block
@property (nonatomic,retain) UIColor * backgroundNormalColor;                   //@synthesize backgroundNormalColor=_backgroundNormalColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundHighlightedColor;              //@synthesize backgroundHighlightedColor=_backgroundHighlightedColor - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (assign,nonatomic) BOOL hasDisclosureIcon;                            //@synthesize hasDisclosureIcon=_hasDisclosureIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pmaDarkTextLinkTraits;
+(id)messageDeepLinkPMATraits;
+(id)editCTALinkTraitsWithTextLabelColor:(id)arg1 ;
+(id)videoHubCardLinkTraits;
+(id)bigPaddingLinkTraits;
+(id)upsellPromotionListViewTraits;
+(id)oldInfoCardInListViewTraits;
+(id)messageLinkTraits;
+(id)padLinkTraits;
+(id)pmaContextRowLinkTraits;
+(id)editActionsTraitsWithRedFont:(BOOL)arg1 ;
+(id)editCTALinkTraitsWithBlueFont;
+(id)activitiesUpsellLinkTraits;
+(id)editCTALinkTraitsWithRedFont:(BOOL)arg1 ;
+(id)defaultTraits;
-(id)initWithTitle:(id)arg1 thumbnailImage:(id)arg2 hasDisclosureIcon:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5 traits:(id)arg6 ;
-(void)setHasDisclosureIcon:(BOOL)arg1 ;
-(void)_viewDidLongPress:(id)arg1 ;
-(void)_updateBackgroundColorForActive:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 thumbnailImage:(id)arg2 hasDisclosureIcon:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(void)setDisclosureText:(NSString *)arg1 ;
-(NSString *)disclosureText;
-(UIColor *)backgroundNormalColor;
-(void)setBackgroundNormalColor:(UIColor *)arg1 ;
-(UIColor *)backgroundHighlightedColor;
-(void)setBackgroundHighlightedColor:(UIColor *)arg1 ;
-(BOOL)hasDisclosureIcon;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(unsigned long long)badgeValue;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setBadgeStyle:(unsigned long long)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(unsigned long long)badgeStyle;
-(NSString *)subtitleText;
@end
