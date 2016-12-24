/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIView.h>
#import <eBay/EUIImageViewLoaderDelegate.h>
#import <eBay/EBUUSSDataDriven.h>

@class EBNUSSBackground, EUIImageView, EUILabel, EBUSellingListAnItemButtonView, EUILineSeparatorView, EUIView, NSLayoutConstraint, NSString;

@interface EBUSellingInspirationCardView : EUIView <EUIImageViewLoaderDelegate, EBUUSSDataDriven> {

	EBNUSSBackground* _background;
	EUIImageView* _rightSideImageView;
	EUILabel* _textLabel;
	EUILabel* _detailTextLabel;
	EBUSellingListAnItemButtonView* _sellSomethingButtonView;
	EUILineSeparatorView* _lineSeparator;
	EUIView* _containerView;
	NSLayoutConstraint* _imgViewWidthConstraint;
	NSString* _trackingID;

}

@property (nonatomic,readonly) EBNUSSBackground * background;                                       //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) EUIImageView * rightSideImageView;                                     //@synthesize rightSideImageView=_rightSideImageView - In the implementation block
@property (nonatomic,retain) EUILabel * textLabel;                                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) EUILabel * detailTextLabel;                                            //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) EBUSellingListAnItemButtonView * sellSomethingButtonView;              //@synthesize sellSomethingButtonView=_sellSomethingButtonView - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * lineSeparator;                                  //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,retain) EUIView * containerView;                                               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imgViewWidthConstraint;                           //@synthesize imgViewWidthConstraint=_imgViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSString * trackingID;                                                 //@synthesize trackingID=_trackingID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eui_newDynamicSizeTemplate;
-(void)loadDataSource:(id)arg1 ;
-(id)colorForIpadGutter;
-(EUILineSeparatorView *)lineSeparator;
-(void)setLineSeparator:(EUILineSeparatorView *)arg1 ;
-(EUIImageView *)rightSideImageView;
-(EBUSellingListAnItemButtonView *)sellSomethingButtonView;
-(void)setRightSideImageView:(EUIImageView *)arg1 ;
-(void)setSellSomethingButtonView:(EBUSellingListAnItemButtonView *)arg1 ;
-(NSLayoutConstraint *)imgViewWidthConstraint;
-(void)setImgViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(Class)actionButtonClass;
-(void)imageViewLoader:(id)arg1 didDisplayForImageView:(id)arg2 isPlaceholderImage:(BOOL)arg3 ;
-(id)init;
-(EUIView *)containerView;
-(void)setContainerView:(EUIView *)arg1 ;
-(EUILabel *)textLabel;
-(EUILabel *)detailTextLabel;
-(EBNUSSBackground *)background;
-(void)setTextLabel:(EUILabel *)arg1 ;
-(void)setupConstraints;
-(void)setDetailTextLabel:(EUILabel *)arg1 ;
-(void)setTrackingID:(NSString *)arg1 ;
-(NSString *)trackingID;
@end
