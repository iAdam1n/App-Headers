/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <SolitaireFree/FBAdViewabilityValidatorDelegate.h>
#import <SolitaireFree/FBAdScrollViewCell.h>

@protocol FBAdMultiProductCellDelegate;
@class FBNativeAdMultiProductDataModel, UIImageView, FBAdViewabilityValidator, NSString;

@interface FBAdMultiProductCell : UIView <FBAdViewabilityValidatorDelegate, FBAdScrollViewCell> {

	BOOL _debugMode;
	FBNativeAdMultiProductDataModel* _content;
	UIImageView* _imageView;
	id<FBAdMultiProductCellDelegate> _delegate;
	FBAdViewabilityValidator* _viewabilityValidator;

}

@property (assign,nonatomic,__weak) FBNativeAdMultiProductDataModel * content;              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdMultiProductCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBAdViewabilityValidator * viewabilityValidator;               //@synthesize viewabilityValidator=_viewabilityValidator - In the implementation block
@property (assign,nonatomic) BOOL debugMode;                                                //@synthesize debugMode=_debugMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)debugMode;
-(void)gestureRecognizerTappedCell:(id)arg1 ;
-(void)dispatchClicked;
-(BOOL)dispatchVisible;
-(BOOL)viewDidAppearOnScreen;
-(void)updateCellWithData:(id)arg1 ;
-(void)buttonTappedCell:(id)arg1 ;
-(FBAdViewabilityValidator *)viewabilityValidator;
-(void)setViewabilityValidator:(FBAdViewabilityValidator *)arg1 ;
-(void)updateView:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBAdMultiProductCellDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<FBAdMultiProductCellDelegate>)delegate;
-(UIImageView *)imageView;
-(FBNativeAdMultiProductDataModel *)content;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setContent:(FBNativeAdMultiProductDataModel *)arg1 ;
@end
