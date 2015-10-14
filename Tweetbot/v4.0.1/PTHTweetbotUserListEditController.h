/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateUI;
-(id)initWithList:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)_hideKeyboard;
@end

