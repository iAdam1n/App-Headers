/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUICollectionReusableView.h>

@protocol EBUSearchGuidanceViewDelegate;
@class EBNSearchResultsGuidance, EBUDynamicHeightLabel, UIImageView, UIView, NSArray;

@interface EBUSearchGuidanceView : EUICollectionReusableView {

	EBNSearchResultsGuidance* _searchResultsGuidance;
	id<EBUSearchGuidanceViewDelegate> _delegate;
	EBUDynamicHeightLabel* _dynamicHeightLabel;
	UIImageView* _accessoryView;
	UIView* _containerView;
	UIView* _dividerView;
	NSArray* _commonConstraints;
	NSArray* _compactConstraints;
	NSArray* _regularConstraints;

}

@property (nonatomic,retain) EBUDynamicHeightLabel * dynamicHeightLabel;                     //@synthesize dynamicHeightLabel=_dynamicHeightLabel - In the implementation block
@property (nonatomic,retain) UIImageView * accessoryView;                                    //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                           //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) NSArray * commonConstraints;                                    //@synthesize commonConstraints=_commonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * compactConstraints;                                   //@synthesize compactConstraints=_compactConstraints - In the implementation block
@property (nonatomic,retain) NSArray * regularConstraints;                                   //@synthesize regularConstraints=_regularConstraints - In the implementation block
@property (nonatomic,retain) EBNSearchResultsGuidance * searchResultsGuidance;               //@synthesize searchResultsGuidance=_searchResultsGuidance - In the implementation block
@property (assign,nonatomic,__weak) id<EBUSearchGuidanceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDividerView:(UIView *)arg1 ;
-(void)setSearchResultsGuidance:(EBNSearchResultsGuidance *)arg1 ;
-(EBNSearchResultsGuidance *)searchResultsGuidance;
-(EBUDynamicHeightLabel *)dynamicHeightLabel;
-(void)setDynamicHeightLabel:(EBUDynamicHeightLabel *)arg1 ;
-(NSArray *)compactConstraints;
-(void)setCompactConstraints:(NSArray *)arg1 ;
-(NSArray *)regularConstraints;
-(void)setRegularConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EBUSearchGuidanceViewDelegate>)arg1 ;
-(id<EBUSearchGuidanceViewDelegate>)delegate;
-(UIView *)containerView;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)edgeInsets;
-(void)setContainerView:(UIView *)arg1 ;
-(void)updateConstraints;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(UIImageView *)accessoryView;
-(void)setAccessoryView:(UIImageView *)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(double)heightForWidth:(double)arg1 ;
-(UIView *)dividerView;
-(NSArray *)commonConstraints;
-(void)setCommonConstraints:(NSArray *)arg1 ;
@end
