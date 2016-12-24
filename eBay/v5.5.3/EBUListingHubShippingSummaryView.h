/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUDynamicHeightView.h>

@class NSArray, EUILabel, EUILineSeparatorView, EUIView, GuidanceBoxView, UIImageView, EBUListingHubShippingSummaryViewModel, NSLayoutConstraint;

@interface EBUListingHubShippingSummaryView : EBUDynamicHeightView {

	BOOL _highlighted;
	NSArray* _optionLabels;
	EUILabel* _titleLabel;
	EUILabel* _shippingServiceLabel;
	EUILabel* _whoPaysLabel;
	EUILineSeparatorView* _separator;
	EUIView* _additionalOptionsView;
	GuidanceBoxView* _suggestedShippingBox;
	UIImageView* _checkMark;
	EBUListingHubShippingSummaryViewModel* _viewModel;
	NSLayoutConstraint* _minimumHeightConstraint;

}

@property (nonatomic,retain) EUILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) EUILabel * shippingServiceLabel;                                //@synthesize shippingServiceLabel=_shippingServiceLabel - In the implementation block
@property (nonatomic,retain) EUILabel * whoPaysLabel;                                        //@synthesize whoPaysLabel=_whoPaysLabel - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * separator;                               //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) EUIView * additionalOptionsView;                                //@synthesize additionalOptionsView=_additionalOptionsView - In the implementation block
@property (nonatomic,retain) GuidanceBoxView * suggestedShippingBox;                         //@synthesize suggestedShippingBox=_suggestedShippingBox - In the implementation block
@property (nonatomic,retain) UIImageView * checkMark;                                        //@synthesize checkMark=_checkMark - In the implementation block
@property (nonatomic,retain) EBUListingHubShippingSummaryViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minimumHeightConstraint;                   //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,copy) NSArray * optionLabels;                                           //@synthesize optionLabels=_optionLabels - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                               //@synthesize highlighted=_highlighted - In the implementation block
+(BOOL)shouldLayoutViewWhenCalculatingHeight;
-(EUILabel *)shippingServiceLabel;
-(EUILabel *)whoPaysLabel;
-(void)configureView:(BOOL)arg1 isComplete:(BOOL)arg2 ;
-(void)setShippingServiceLabel:(EUILabel *)arg1 ;
-(void)setWhoPaysLabel:(EUILabel *)arg1 ;
-(id)initWithShippingInfo:(id)arg1 ;
-(NSArray *)optionLabels;
-(void)updateWithShippingInfo:(id)arg1 ;
-(GuidanceBoxView *)suggestedShippingBox;
-(EUIView *)additionalOptionsView;
-(void)setAdditionalOptionsView:(EUIView *)arg1 ;
-(void)setOptionLabels:(NSArray *)arg1 ;
-(void)setSuggestedShippingBox:(GuidanceBoxView *)arg1 ;
-(void)setCheckMark:(UIImageView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(EUILabel *)titleLabel;
-(id)separatorColor;
-(BOOL)highlighted;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)setSeparator:(EUILineSeparatorView *)arg1 ;
-(EUILineSeparatorView *)separator;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)checkMark;
-(EBUListingHubShippingSummaryViewModel *)viewModel;
-(void)setViewModel:(EBUListingHubShippingSummaryViewModel *)arg1 ;
-(double)heightForWidth:(double)arg1 ;
-(BOOL)isIpad;
@end
