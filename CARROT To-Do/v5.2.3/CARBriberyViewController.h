/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIImageView, UIColor, UILabel, NSArray, NSDictionary, UIScrollView, UIButton, UITableView, UIView, NSString;

@interface CARBriberyViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UIImageView* _bar;
	UIColor* _blackWhenHappy;
	UIColor* _whiteWhenHappy;
	UIColor* _headerLabelColor;
	BOOL _isAngry;
	BOOL _purchaseTapped;
	UILabel* _unlockablesLabel;
	NSArray* _menuList;
	NSDictionary* _prices;
	UIScrollView* _menuScroll;
	UIButton* _menuOne;
	UIButton* _menuTwo;
	UIButton* _menuThree;
	UIButton* _menuFour;
	UIButton* _restoreButton;
	int _menuIndex;
	NSArray* _purchaseItem;
	int _buttonTag;
	UIImageView* _restorePurchasesBG;
	UITableView* _tableView;
	UIView* _headerView;
	UIImageView* _closeIcon;
	UIButton* _closeButton;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIImageView * closeIcon;               //@synthesize closeIcon=_closeIcon - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                //@synthesize closeButton=_closeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)changeTheme;
-(void)menuButtonClicked:(id)arg1 ;
-(void)setCloseIcon:(UIImageView *)arg1 ;
-(UIImageView *)closeIcon;
-(void)closeTapped;
-(void)popVC;
-(void)restoreButtonAction;
-(void)menuOneAction;
-(void)menuTwoAction;
-(void)menuThreeAction;
-(void)menuFourAction;
-(void)initiateStoreLoad;
-(void)reloadStoreData;
-(void)purchaseItem:(int)arg1 ;
-(void)alreadyPurchasedItem:(int)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
@end
