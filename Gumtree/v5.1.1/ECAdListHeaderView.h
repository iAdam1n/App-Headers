/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionReusableView.h>

@protocol ECAdListHeaderViewDelegate;
@class UIButton, UIScrollView, ECGradientView;

@interface ECAdListHeaderView : UICollectionReusableView {

	id<ECAdListHeaderViewDelegate> _delegate;
	UIButton* _refineButton;
	UIScrollView* _buttonsScrollView;
	ECGradientView* _gradientView;

}

@property (assign,nonatomic,__weak) UIButton * refineButton;                              //@synthesize refineButton=_refineButton - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * buttonsScrollView;                     //@synthesize buttonsScrollView=_buttonsScrollView - In the implementation block
@property (assign,nonatomic,__weak) ECGradientView * gradientView;                        //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic,__weak) id<ECAdListHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIButton *)refineButton;
-(void)setRefineButton:(UIButton *)arg1 ;
-(void)categoryButtonTapped:(id)arg1 ;
-(void)categoryDismissTapped:(id)arg1 ;
-(void)locationButtonTapped:(id)arg1 ;
-(void)locationDismissTapped:(id)arg1 ;
-(void)addButtons:(id)arg1 ;
-(UIScrollView *)buttonsScrollView;
-(void)configureWithMetadata:(id)arg1 ;
-(void)refineButtonTapped:(id)arg1 ;
-(void)setButtonsScrollView:(UIScrollView *)arg1 ;
-(void)setDelegate:(id<ECAdListHeaderViewDelegate>)arg1 ;
-(id<ECAdListHeaderViewDelegate>)delegate;
-(void)awakeFromNib;
-(void)setGradientView:(ECGradientView *)arg1 ;
-(ECGradientView *)gradientView;
@end

