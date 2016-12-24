/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>

@class EBNListing, NSIndexPath, NSArray, EUILabelStyleInfo, EBUAccessibilityGroup, EBUListingSummaryView, EBUListingSummaryViewTheme, EUIImageView, EUILabel, UIStackView, NSMutableDictionary;

@interface EBUSearchResultsPreviewController : EUIViewController {

	EBNListing* _listing;
	NSIndexPath* _indexPath;
	NSArray* _previewActionItemsOverride;
	EUILabelStyleInfo* _titleStyleInfo;
	EBUAccessibilityGroup* _accessibilityGroup;
	EBUListingSummaryView* _summaryView;
	EBUListingSummaryViewTheme* _summaryTheme;
	EUIImageView* _pictureView;
	EUILabel* _titleLabel;
	UIStackView* _stackView;
	UIStackView* _priceView;
	EUILabel* _priceTitle;
	EUILabel* _priceLabel;
	UIStackView* _shippingView;
	EUILabel* _shippingTitle;
	EUILabel* _shippingLabel;
	UIStackView* _conditionView;
	EUILabel* _conditionTitle;
	EUILabel* _conditionLabel;
	UIStackView* _deliveryView;
	EUILabel* _deliveryTitle;
	EUILabel* _deliveryLabel;
	UIStackView* _sellerView;
	EUILabel* _sellerTitle;
	EUILabel* _sellerLabel;
	UIStackView* _feedbackView;
	EUILabel* _feedbackTitle;
	EUILabel* _feedbackLabel;
	NSMutableDictionary* _viewsDictionary;
	NSArray* _localConstraints;

}

@property (nonatomic,retain) EBNListing * listing;                                    //@synthesize listing=_listing - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                 //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) EUILabelStyleInfo * titleStyleInfo;                      //@synthesize titleStyleInfo=_titleStyleInfo - In the implementation block
@property (nonatomic,retain) EBUAccessibilityGroup * accessibilityGroup;              //@synthesize accessibilityGroup=_accessibilityGroup - In the implementation block
@property (nonatomic,retain) EBUListingSummaryView * summaryView;                     //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) EBUListingSummaryViewTheme * summaryTheme;               //@synthesize summaryTheme=_summaryTheme - In the implementation block
@property (nonatomic,retain) EUIImageView * pictureView;                              //@synthesize pictureView=_pictureView - In the implementation block
@property (nonatomic,retain) EUILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                 //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIStackView * priceView;                                 //@synthesize priceView=_priceView - In the implementation block
@property (nonatomic,retain) EUILabel * priceTitle;                                   //@synthesize priceTitle=_priceTitle - In the implementation block
@property (nonatomic,retain) EUILabel * priceLabel;                                   //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UIStackView * shippingView;                              //@synthesize shippingView=_shippingView - In the implementation block
@property (nonatomic,retain) EUILabel * shippingTitle;                                //@synthesize shippingTitle=_shippingTitle - In the implementation block
@property (nonatomic,retain) EUILabel * shippingLabel;                                //@synthesize shippingLabel=_shippingLabel - In the implementation block
@property (nonatomic,retain) UIStackView * conditionView;                             //@synthesize conditionView=_conditionView - In the implementation block
@property (nonatomic,retain) EUILabel * conditionTitle;                               //@synthesize conditionTitle=_conditionTitle - In the implementation block
@property (nonatomic,retain) EUILabel * conditionLabel;                               //@synthesize conditionLabel=_conditionLabel - In the implementation block
@property (nonatomic,retain) UIStackView * deliveryView;                              //@synthesize deliveryView=_deliveryView - In the implementation block
@property (nonatomic,retain) EUILabel * deliveryTitle;                                //@synthesize deliveryTitle=_deliveryTitle - In the implementation block
@property (nonatomic,retain) EUILabel * deliveryLabel;                                //@synthesize deliveryLabel=_deliveryLabel - In the implementation block
@property (nonatomic,retain) UIStackView * sellerView;                                //@synthesize sellerView=_sellerView - In the implementation block
@property (nonatomic,retain) EUILabel * sellerTitle;                                  //@synthesize sellerTitle=_sellerTitle - In the implementation block
@property (nonatomic,retain) EUILabel * sellerLabel;                                  //@synthesize sellerLabel=_sellerLabel - In the implementation block
@property (nonatomic,retain) UIStackView * feedbackView;                              //@synthesize feedbackView=_feedbackView - In the implementation block
@property (nonatomic,retain) EUILabel * feedbackTitle;                                //@synthesize feedbackTitle=_feedbackTitle - In the implementation block
@property (nonatomic,retain) EUILabel * feedbackLabel;                                //@synthesize feedbackLabel=_feedbackLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewsDictionary;                   //@synthesize viewsDictionary=_viewsDictionary - In the implementation block
@property (nonatomic,retain) NSArray * localConstraints;                              //@synthesize localConstraints=_localConstraints - In the implementation block
@property (nonatomic,retain) NSArray * previewActionItemsOverride;                    //@synthesize previewActionItemsOverride=_previewActionItemsOverride - In the implementation block
-(NSMutableDictionary *)viewsDictionary;
-(void)setViewsDictionary:(NSMutableDictionary *)arg1 ;
-(EUIImageView *)pictureView;
-(void)setupTitle;
-(void)setShippingLabel:(EUILabel *)arg1 ;
-(UIStackView *)deliveryView;
-(void)setDeliveryView:(UIStackView *)arg1 ;
-(EBUAccessibilityGroup *)accessibilityGroup;
-(void)setupPicture;
-(void)setupStack;
-(void)setupPrice;
-(void)setupShipping;
-(void)setupCondition;
-(void)setupDelivery;
-(void)setupSeller;
-(void)setupFeedback;
-(EBUListingSummaryViewTheme *)summaryTheme;
-(double)verticalSpacing;
-(double)horizontalSpacing;
-(UIStackView *)priceView;
-(EUILabel *)priceTitle;
-(UIStackView *)shippingView;
-(EUILabel *)shippingTitle;
-(UIStackView *)conditionView;
-(EUILabel *)conditionTitle;
-(EUILabel *)conditionLabel;
-(EUILabel *)deliveryTitle;
-(EUILabel *)deliveryLabel;
-(UIStackView *)sellerView;
-(EUILabel *)sellerTitle;
-(EUILabel *)sellerLabel;
-(EUILabel *)feedbackTitle;
-(EUILabel *)feedbackLabel;
-(NSArray *)previewActionItemsOverride;
-(void)setupWithListing:(id)arg1 atIndexPath:(id)arg2 andSummaryView:(id)arg3 ;
-(void)setPreviewActionItemsOverride:(NSArray *)arg1 ;
-(void)setAccessibilityGroup:(EBUAccessibilityGroup *)arg1 ;
-(void)setSummaryTheme:(EBUListingSummaryViewTheme *)arg1 ;
-(void)setPictureView:(EUIImageView *)arg1 ;
-(void)setPriceView:(UIStackView *)arg1 ;
-(void)setPriceTitle:(EUILabel *)arg1 ;
-(void)setShippingView:(UIStackView *)arg1 ;
-(void)setShippingTitle:(EUILabel *)arg1 ;
-(void)setConditionView:(UIStackView *)arg1 ;
-(void)setConditionTitle:(EUILabel *)arg1 ;
-(void)setConditionLabel:(EUILabel *)arg1 ;
-(void)setDeliveryTitle:(EUILabel *)arg1 ;
-(void)setDeliveryLabel:(EUILabel *)arg1 ;
-(void)setSellerView:(UIStackView *)arg1 ;
-(void)setSellerTitle:(EUILabel *)arg1 ;
-(void)setSellerLabel:(EUILabel *)arg1 ;
-(void)setFeedbackTitle:(EUILabel *)arg1 ;
-(void)setFeedbackLabel:(EUILabel *)arg1 ;
-(void)setTitleStyleInfo:(EUILabelStyleInfo *)arg1 ;
-(EUILabelStyleInfo *)titleStyleInfo;
-(EUILabel *)shippingLabel;
-(NSArray *)localConstraints;
-(void)setLocalConstraints:(NSArray *)arg1 ;
-(EBNListing *)listing;
-(void)setListing:(EBNListing *)arg1 ;
-(NSIndexPath *)indexPath;
-(UIEdgeInsets)contentInsets;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(EUILabel *)titleLabel;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(CGSize)preferredContentSize;
-(id)previewActionItems;
-(UIStackView *)stackView;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(UIStackView *)feedbackView;
-(void)setFeedbackView:(UIStackView *)arg1 ;
-(void)setupConstraints;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setupAccessibility;
-(void)setPriceLabel:(EUILabel *)arg1 ;
-(EUILabel *)priceLabel;
-(void)setSummaryView:(EBUListingSummaryView *)arg1 ;
-(EBUListingSummaryView *)summaryView;
-(id)layoutConstraints;
@end
