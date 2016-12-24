/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class UIScrollView, PTHStaticSectionCell, PTHStaticSectionView, PTHButton, PTHTweetbotAccount, PTHTweetbotCursorFilter, PTHTweetbotCursorFilterCompoundPredicate;

@interface PTHTweetbotCursorFilterEditController : PTHViewController {

	UIScrollView* _scrollView;
	PTHStaticSectionCell* _titleCell;
	PTHStaticSectionCell* _includeKeywordsCell;
	PTHStaticSectionCell* _excludeKeywordsCell;
	PTHStaticSectionView* _rulesSection;
	PTHButton* _addRuleButton;
	PTHButton* _rulesTypeButton;
	PTHTweetbotAccount* _account;
	PTHTweetbotCursorFilter* _cursorFilter;
	PTHTweetbotCursorFilterCompoundPredicate* _rulesPredicate;

}

@property (nonatomic,retain) PTHTweetbotCursorFilterCompoundPredicate * rulesPredicate;              //@synthesize rulesPredicate=_rulesPredicate - In the implementation block
@property (nonatomic,readonly) PTHTweetbotAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) PTHTweetbotCursorFilter * cursorFilter;                               //@synthesize cursorFilter=_cursorFilter - In the implementation block
-(PTHTweetbotCursorFilter *)cursorFilter;
-(void)keyboardChanged:(id)arg1 ;
-(id)initWithAccount:(id)arg1 cursorFilter:(id)arg2 ;
-(id)createCellFromRulePredicate:(id)arg1 ;
-(id)createFooterView;
-(void)_addRule:(id)arg1 ;
-(void)_toggleRuleType:(id)arg1 ;
-(id)currentPredicate;
-(void)_editOrDeleteRule:(id)arg1 ;
-(void)setRulesPredicate:(PTHTweetbotCursorFilterCompoundPredicate *)arg1 ;
-(void)_editRule:(id)arg1 ;
-(PTHTweetbotCursorFilterCompoundPredicate *)rulesPredicate;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateUI;
-(PTHTweetbotAccount *)account;
-(void)save;
@end
