/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/SimpleListPicker.h>
#import <eBay/EBURefineViewControllerProtocol.h>

@protocol EBURefineResultsDelegate;
@class EBNSearchOptions, NSString, NSMutableArray, EBNDataManager, RefineTitleView;

@interface RefineAspectController : SimpleListPicker <EBURefineViewControllerProtocol> {

	EBNSearchOptions* searchOptions;
	NSString* aspectName;
	NSMutableArray* _textColors;
	BOOL _visibleInDeck;
	EBNDataManager* dataManager;
	id<EBURefineResultsDelegate> resultsDelegate;
	NSString* _aspectTitle;
	RefineTitleView* _refineTitleView;

}

@property (nonatomic,retain) RefineTitleView * refineTitleView;                                //@synthesize refineTitleView=_refineTitleView - In the implementation block
@property (nonatomic,copy) NSString * aspectName; 
@property (nonatomic,copy) NSString * aspectTitle;                                             //@synthesize aspectTitle=_aspectTitle - In the implementation block
@property (assign,nonatomic) BOOL visibleInDeck;                                               //@synthesize visibleInDeck=_visibleInDeck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EBNSearchOptions * searchOptions; 
@property (nonatomic,retain) EBNDataManager * dataManager; 
@property (assign,nonatomic,__weak) id<EBURefineResultsDelegate> resultsDelegate; 
@property (nonatomic,retain) NSString * titleStatus; 
@property (nonatomic,readonly) NSString * descriptionOfOptions; 
@property (nonatomic,readonly) BOOL isCustomizedOption; 
+(id)makeRefineViewController;
-(void)simpleListSelectionChanged;
-(void)dismissThisView;
-(void)reloadTableData;
-(BOOL)checkIfOkayToDismissThisView:(BOOL)arg1 ;
-(NSString *)titleStatus;
-(void)setTitleStatus:(NSString *)arg1 ;
-(NSString *)descriptionOfOptions;
-(BOOL)isCustomizedOption;
-(void)contentDeckOverlayView:(id)arg1 wasHidden:(BOOL)arg2 ;
-(void)enableScrollingDuringPan:(BOOL)arg1 ;
-(void)updateViewForAspect;
-(void)updatePopoverPreferredContentSize;
-(RefineTitleView *)refineTitleView;
-(NSString *)aspectTitle;
-(void)setVisibleInDeck:(BOOL)arg1 ;
-(NSString *)aspectName;
-(void)setAspectName:(NSString *)arg1 ;
-(void)setAspectTitle:(NSString *)arg1 ;
-(BOOL)visibleInDeck;
-(void)setRefineTitleView:(RefineTitleView *)arg1 ;
-(void)setDataManager:(EBNDataManager *)arg1 ;
-(EBNDataManager *)dataManager;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)calculatePreferredContentSize;
-(void)setResultsDelegate:(id<EBURefineResultsDelegate>)arg1 ;
-(id<EBURefineResultsDelegate>)resultsDelegate;
-(void)setSearchOptions:(EBNSearchOptions *)arg1 ;
-(EBNSearchOptions *)searchOptions;
@end

