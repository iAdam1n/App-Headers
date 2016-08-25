/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol EBUFooterButtonViewDelegate;
@class UIButton, UIView, NSMutableArray, NSLayoutConstraint;

@interface EBUFooterButtonView : UICollectionReusableView {

	BOOL _shouldIncludeGutter;
	UIButton* _actionButton;
	UIView* _containerView;
	NSMutableArray* _containerConstraints;
	NSLayoutConstraint* _actionButtonConstraint;
	id<EBUFooterButtonViewDelegate> _delegate;
	NSLayoutConstraint* _containerHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * containerHeightConstraint;               //@synthesize containerHeightConstraint=_containerHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIButton * actionButton;                               //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerConstraints;                        //@synthesize containerConstraints=_containerConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * actionButtonConstraint;                  //@synthesize actionButtonConstraint=_actionButtonConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<EBUFooterButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeGutter;                                     //@synthesize shouldIncludeGutter=_shouldIncludeGutter - In the implementation block
+(double)height;
-(NSMutableArray *)containerConstraints;
-(NSLayoutConstraint *)actionButtonConstraint;
-(NSLayoutConstraint *)containerHeightConstraint;
-(void)setShouldIncludeGutter:(BOOL)arg1 ;
-(void)setContainerConstraints:(NSMutableArray *)arg1 ;
-(void)setActionButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)shouldIncludeGutter;
-(void)setContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EBUFooterButtonViewDelegate>)arg1 ;
-(id<EBUFooterButtonViewDelegate>)delegate;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)buttonPressed:(id)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setTopPadding:(double)arg1 ;
@end

