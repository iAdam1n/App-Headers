/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUSearchRefineToolbarController.h>

@class UIButton;

@interface EPHSearchRefineToolbarController : EBUSearchRefineToolbarController {

	BOOL _showFollowButton;
	UIButton* _sortButton;

}

@property (nonatomic,retain) UIButton * sortButton;              //@synthesize sortButton=_sortButton - In the implementation block
@property (assign,nonatomic) BOOL showFollowButton;              //@synthesize showFollowButton=_showFollowButton - In the implementation block
-(void)configureBar;
-(void)setShowFollowButton:(BOOL)arg1 ;
-(id)makeRefineButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)sortButtonAction:(id)arg1 ;
-(id)makeRefineBarView;
-(UIButton *)sortButton;
-(void)setSortButton:(UIButton *)arg1 ;
-(UIEdgeInsets)refineButtonTitleInsets;
-(UIEdgeInsets)refineButtonImageInsets;
-(void)updateSortButton;
-(BOOL)showFollowButton;
-(double)toolbarHeight;
-(void)viewDidLoad;
@end

