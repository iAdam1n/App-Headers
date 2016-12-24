/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASControlNode.h>
#import <Facebook/ASNetworkImageNodeDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBNativeAdRedesignFooterNodeDelegate.h>

@protocol FBNativeAdShareContentNodeDelegateFBInlineAdHeaderNodeDelegate;
@class FBNativeAdShareContentRedesignNodeMetrics, FBNativeAdCTAButtonNodeMetrics, FBNativeAdRedesignFooterNodeMetrics, UIImageView, ASDisplayNode, ASTextNode, ASNetworkImageNode, CALayer, FBNativeAdRedesignFooterNode, FBNativeAdRedesignTwoStepFooterNode, NSString;

@interface FBNativeAdShareContentRedesignNode : ASControlNode <ASNetworkImageNodeDelegate, FBPopoverControllerDelegate, FBNativeAdRedesignFooterNodeDelegate> {

	FBNativeAdShareContentRedesignNodeMetrics* _metrics;
	FBNativeAdCTAButtonNodeMetrics* _buttonNodeMetrics;
	FBNativeAdRedesignFooterNodeMetrics* _footerNodeMetrics;
	UIImageView* _shareIconImageView;
	ASDisplayNode* _shareIconNode;
	ASTextNode* _shareTitleNode;
	ASTextNode* _sponsoredLabelNode;
	ASNetworkImageNode* _shareImageNode;
	CALayer* _imageTopLayer;
	CALayer* _imageBottomLayer;
	FBNativeAdRedesignFooterNode* _footerNode;
	FBNativeAdRedesignTwoStepFooterNode* _twoStepActionFooterNode;
	CGSize _shareImageSize;
	CGSize _shareIconSize;
	ASDisplayNode* _chevronButtonNode;
	ASDisplayNode* _contentBorderNode;
	BOOL _enableFullWidthImageRedesign;
	BOOL _enableTwoStepRedesign;
	BOOL _isTwoStepActionFooterNodeBackgroundChanged;
	BOOL _enableFullLengthBorderLine;
	id<FBNativeAdShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeAdShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)handleIntent:(id)arg1 ;
-(void)didLoad;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_didTapChevronButtonNode;
-(void)_didTapTwoStepImageNode;
-(void)_didTapImageNode;
-(void)_didTapTwoStepActionFooterNode;
-(void)tapTwoStepFooterNodeClearBackgroundAndTextColor:(id)arg1 ;
-(void)tapTwoStepFooterNodeSetBackgroundAndTextColor:(id)arg1 ;
-(void)imageNode:(id)arg1 didLoadImage:(id)arg2 ;
-(void)nativeAdRedesignFooterNode:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)didTapNativeAdRedesignFooterNode:(id)arg1 ;
-(id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 bodyText:(id)arg3 actionButtonText:(id)arg4 imageURLString:(id)arg5 iconURLString:(id)arg6 imageSize:(CGSize)arg7 iconSize:(CGSize)arg8 isAdDropDownEnabled:(BOOL)arg9 layoutDirection:(long long)arg10 metrics:(id)arg11 session:(id)arg12 ;
-(void)setDelegate:(id<FBNativeAdShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate>)arg1 ;
-(id<FBNativeAdShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate>)delegate;
-(void)layout;
@end
