/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <BubbleMania/RepeatableGameplayRewardTooltipDelegate.h>

@class S8ImageView, NSTimer, UIView, S8Label, UIButton, NSString;

@interface RepeatableGameplayRewardInventoryTabView : XibView <UITableViewDataSource, UITableViewDelegate, RepeatableGameplayRewardTooltipDelegate> {

	S8ImageView* _leagueBanner;
	S8ImageView* _leagueBage;
	NSTimer* _tooltipTimer;
	UIView* _upperTooltipsView;
	S8Label* _upperTooltipsDescriptionLabel;
	S8Label* _toolTipHeaderLabel;
	S8Label* _toolTipUnlockLabel;
	S8ImageView* _tooltipIconImage;
	UIView* _inventoryTable;
	S8Label* _noItemsLabel;
	UIButton* _currentSelectedUpperTooltip;
	long long _currentTagUpperTooltip;

}

@property (nonatomic,retain) S8ImageView * leagueBanner;                           //@synthesize leagueBanner=_leagueBanner - In the implementation block
@property (nonatomic,retain) S8ImageView * leagueBage;                             //@synthesize leagueBage=_leagueBage - In the implementation block
@property (nonatomic,retain) NSTimer * tooltipTimer;                               //@synthesize tooltipTimer=_tooltipTimer - In the implementation block
@property (nonatomic,retain) UIView * upperTooltipsView;                           //@synthesize upperTooltipsView=_upperTooltipsView - In the implementation block
@property (nonatomic,retain) S8Label * upperTooltipsDescriptionLabel;              //@synthesize upperTooltipsDescriptionLabel=_upperTooltipsDescriptionLabel - In the implementation block
@property (nonatomic,retain) S8Label * toolTipHeaderLabel;                         //@synthesize toolTipHeaderLabel=_toolTipHeaderLabel - In the implementation block
@property (nonatomic,retain) S8Label * toolTipUnlockLabel;                         //@synthesize toolTipUnlockLabel=_toolTipUnlockLabel - In the implementation block
@property (nonatomic,retain) S8ImageView * tooltipIconImage;                       //@synthesize tooltipIconImage=_tooltipIconImage - In the implementation block
@property (nonatomic,retain) UIView * inventoryTable;                              //@synthesize inventoryTable=_inventoryTable - In the implementation block
@property (nonatomic,retain) S8Label * noItemsLabel;                               //@synthesize noItemsLabel=_noItemsLabel - In the implementation block
@property (nonatomic,retain) UIButton * currentSelectedUpperTooltip;               //@synthesize currentSelectedUpperTooltip=_currentSelectedUpperTooltip - In the implementation block
@property (assign,nonatomic) long long currentTagUpperTooltip;                     //@synthesize currentTagUpperTooltip=_currentTagUpperTooltip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(S8ImageView *)leagueBanner;
-(void)setLeagueBanner:(S8ImageView *)arg1 ;
-(void)setCurrentTagUpperTooltip:(long long)arg1 ;
-(S8ImageView *)leagueBage;
-(UIView *)upperTooltipsView;
-(S8Label *)upperTooltipsDescriptionLabel;
-(UIButton *)currentSelectedUpperTooltip;
-(long long)currentTagUpperTooltip;
-(void)setCurrentSelectedUpperTooltip:(UIButton *)arg1 ;
-(void)setUpperTooltipsView:(UIView *)arg1 ;
-(void)setUpperTooltipsDescriptionLabel:(S8Label *)arg1 ;
-(void)setLeagueBage:(S8ImageView *)arg1 ;
-(UIView *)inventoryTable;
-(S8Label *)noItemsLabel;
-(NSTimer *)tooltipTimer;
-(void)setTooltipTimer:(NSTimer *)arg1 ;
-(void)updateBanner;
-(S8ImageView *)tooltipIconImage;
-(S8Label *)toolTipHeaderLabel;
-(S8Label *)toolTipUnlockLabel;
-(void)addHideTooltipAnimation;
-(void)displayTooltipForBonusType:(long long)arg1 ;
-(void)refreshRewardView:(BOOL)arg1 ;
-(void)setToolTipHeaderLabel:(S8Label *)arg1 ;
-(void)setToolTipUnlockLabel:(S8Label *)arg1 ;
-(void)setTooltipIconImage:(S8ImageView *)arg1 ;
-(void)setInventoryTable:(UIView *)arg1 ;
-(void)setNoItemsLabel:(S8Label *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)resetTimers;
@end

