/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUSearchRefineToolbarController.h>

@class UIView, UIButton;

@interface EPDSearchRefineToolbarController : EBUSearchRefineToolbarController {

	UIView* _refinementsContainer;
	UIButton* _sortButton;
	UIButton* _conditionButton;
	UIButton* _formatButton;

}

@property (nonatomic,retain) UIView * refinementsContainer;              //@synthesize refinementsContainer=_refinementsContainer - In the implementation block
@property (nonatomic,retain) UIButton * sortButton;                      //@synthesize sortButton=_sortButton - In the implementation block
@property (nonatomic,retain) UIButton * conditionButton;                 //@synthesize conditionButton=_conditionButton - In the implementation block
@property (nonatomic,retain) UIButton * formatButton;                    //@synthesize formatButton=_formatButton - In the implementation block
-(void)configureBar;
-(id)makeRefineButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)conditionButtonAction:(id)arg1 ;
-(void)formatButtonAction:(id)arg1 ;
-(id)sortButtonTitleForSortOrder:(unsigned long long)arg1 ;
-(void)sortButtonAction:(id)arg1 ;
-(void)configureConditionButton;
-(void)configureFormatButton;
-(void)configureSortButton;
-(id)makeRefineBarView;
-(UIView *)refinementsContainer;
-(void)setRefinementsContainer:(UIView *)arg1 ;
-(UIButton *)sortButton;
-(void)setSortButton:(UIButton *)arg1 ;
-(UIButton *)conditionButton;
-(void)setConditionButton:(UIButton *)arg1 ;
-(UIButton *)formatButton;
-(void)setFormatButton:(UIButton *)arg1 ;
-(void)searchResultsDataManagerResultsUpdated:(id)arg1 ;
@end
