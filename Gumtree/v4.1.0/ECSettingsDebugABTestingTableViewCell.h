/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UILabel, ECABTest, UITableView, NSString;

@interface ECSettingsDebugABTestingTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UITextField* _scoreField;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _jsonLabel;
	/*^block*/id _scoreChangeBlock;
	ECABTest* _test;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) UITextField * scoreField;              //@synthesize scoreField=_scoreField - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * subtitleLabel;               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * jsonLabel;                   //@synthesize jsonLabel=_jsonLabel - In the implementation block
@property (copy) id scoreChangeBlock;                                      //@synthesize scoreChangeBlock=_scoreChangeBlock - In the implementation block
@property (__weak) ECABTest * test;                                        //@synthesize test=_test - In the implementation block
@property (__weak) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextField *)scoreField;
-(ECABTest *)test;
-(void)setScoreField:(UITextField *)arg1 ;
-(UILabel *)jsonLabel;
-(void)setJsonLabel:(UILabel *)arg1 ;
-(id)scoreChangeBlock;
-(void)setScoreChangeBlock:(id)arg1 ;
-(void)setTest:(ECABTest *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
@end

