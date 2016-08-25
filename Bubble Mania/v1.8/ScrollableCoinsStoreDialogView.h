/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/XibPurchaseDialogView.h>
#import <BubbleMania/StoreManagerDelegate.h>
#import <BubbleMania/Refreshable.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <BubbleMania/DialogDelegate.h>

@class S8Label, S8ImageView, UIView, UITableView, TimerView, UIImageView, NSMutableArray, S8TableViewDelegate, NSString;

@interface ScrollableCoinsStoreDialogView : XibPurchaseDialogView <StoreManagerDelegate, Refreshable, UITableViewDataSource, UITableViewDelegate, DialogDelegate> {

	S8Label* headerLabel;
	S8ImageView* header;
	UIView* bannerHeaderView;
	UITableView* coinStoreTableView;
	S8ImageView* saleTagImageView;
	UIView* earnFavorPointsImageView;
	TimerView* timerView;
	UIView* coinStoreTableViewContainer;
	UIView* timerViewContainer;
	UIImageView* topShadow;
	UIImageView* bottomShadow;
	UIImageView* middleShadow;
	BOOL transactionSuccessful;
	NSMutableArray* products;
	double originalTopShadowHeight;
	double originalBottomShadowHeight;
	S8TableViewDelegate* tableViewDelegate;
	CGRect originalTableViewFrame;

}

@property (nonatomic,retain) NSMutableArray * products; 
@property (nonatomic,readonly) S8TableViewDelegate * tableViewDelegate; 
@property (assign,nonatomic) BOOL transactionSuccessful; 
@property (assign,nonatomic) CGRect originalTableViewFrame; 
@property (assign,nonatomic) double originalTopShadowHeight; 
@property (assign,nonatomic) double originalBottomShadowHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showView;
+(void)showViewWithDelegate:(id)arg1 ;
-(void)dismissed:(id)arg1 ;
-(void)playTapSound;
-(void)dialogDidClose:(id)arg1 ;
-(void)dialogWasAccepted:(id)arg1 ;
-(void)refreshByTimer;
-(void)setTransactionSuccessful:(BOOL)arg1 ;
-(BOOL)transactionSuccessful;
-(void)processTransactionResponse:(id)arg1 ;
-(void)buyAppleStoreProduct:(id)arg1 ;
-(void)updateTableViewDelegate;
-(id)makeTableViewDelegate;
-(void)setOriginalTableViewFrame:(CGRect)arg1 ;
-(void)setOriginalTopShadowHeight:(double)arg1 ;
-(void)setOriginalBottomShadowHeight:(double)arg1 ;
-(S8TableViewDelegate *)tableViewDelegate;
-(CGRect)originalTableViewFrame;
-(double)originalTopShadowHeight;
-(double)originalBottomShadowHeight;
-(void)earnFavorPoints;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateTimer;
-(void)refresh;
-(void)setProducts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)products;
@end

