/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class PTHTweetbotList, PTHTweetbotAccount, UIScrollView, PTHStaticSectionCell, NSString;

@interface PTHTweetbotUserListEditController : PTHViewController <UIScrollViewDelegate, UITextFieldDelegate> {

	PTHTweetbotList* _list;
	PTHTweetbotAccount* _account;
	UIScrollView* _scrollView;
	PTHStaticSectionCell* _nameCell;
	PTHStaticSectionCell* _listDescriptionCell;
	PTHStaticSectionCell* _privacyCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showFollowers:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithList:(id)arg1 ;
-(void)updateUI;
-(id)initWithAccount:(id)arg1 ;
-(void)_hideKeyboard;
-(void)save;
@end

