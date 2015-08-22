/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@protocol IGSimilarAccountsViewDelegate;
@class NSObject, UIButton, UIView, UILabel;

@interface IGSimilarAccountsView : UITableView {

	NSObject*<IGSimilarAccountsViewDelegate> _similarAccountsViewDelegate;
	UIButton* _closeButton;
	UIView* _topHeaderInnerView;
	UIView* _topHeaderView;
	UILabel* _titleLabel;
	UIView* _triangleView;

}

@property (assign,nonatomic,__weak) NSObject*<IGSimilarAccountsViewDelegate> similarAccountsViewDelegate;              //@synthesize similarAccountsViewDelegate=_similarAccountsViewDelegate - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIView * topHeaderInnerView;                                                              //@synthesize topHeaderInnerView=_topHeaderInnerView - In the implementation block
@property (nonatomic,retain) UIView * topHeaderView;                                                                   //@synthesize topHeaderView=_topHeaderView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * triangleView;                                                                    //@synthesize triangleView=_triangleView - In the implementation block
+(long long)defaultHeight;
-(void)onCloseTapped:(id)arg1 ;
-(UIView *)topHeaderView;
-(UIView *)topHeaderInnerView;
-(UIView *)triangleView;
-(NSObject*<IGSimilarAccountsViewDelegate>)similarAccountsViewDelegate;
-(void)setTriangleViewCenterOffsetX:(double)arg1 ;
-(void)setSimilarAccountsViewDelegate:(NSObject*<IGSimilarAccountsViewDelegate>)arg1 ;
-(void)setTopHeaderInnerView:(UIView *)arg1 ;
-(void)setTopHeaderView:(UIView *)arg1 ;
-(void)setTriangleView:(UIView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIButton *)closeButton;
@end
