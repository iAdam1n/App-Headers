/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:20 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CARROT/CARMenuViewController.h>

@class NSArray, UIImageView, UIColor, UILabel;

@interface CARMoreMenuViewController : CARMenuViewController {

	NSArray* _menuList;
	UIImageView* _bar;
	UIColor* _blackWhenHappy;
	UIColor* _whiteWhenHappy;
	BOOL _isAngry;
	NSArray* _accountsArray;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)todoArchivePath;
-(void)changeTheme;
-(void)twitterFollow;
-(void)followAction:(id)arg1 ;
-(void)twitterAccountsAlert;
-(id)getCurrentMoodString;
-(void)reloadTableData;
-(void)menuButtonClicked:(id)arg1 ;
-(void)popVC;
-(void)backToMainMenu;
-(void)popVCDelay;
-(void)showShareSheet:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)swipe;
@end
