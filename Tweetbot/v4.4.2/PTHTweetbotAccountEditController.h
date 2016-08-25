/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class PTHTweetbotAccount, UIScrollView, PTHStaticSectionCell, NSString;

@interface PTHTweetbotAccountEditController : PTHViewController <UITextFieldDelegate> {

	PTHTweetbotAccount* _account;
	UIScrollView* _scrollView;
	PTHStaticSectionCell* _avatarCell;
	PTHStaticSectionCell* _headerCell;
	PTHStaticSectionCell* _nameCell;
	PTHStaticSectionCell* _locationCell;
	PTHStaticSectionCell* _urlCell;
	PTHStaticSectionCell* _userDescriptionCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAvatar:(id)arg1 ;
-(void)updateHeader:(id)arg1 ;
-(void)_updateImage:(id)arg1 cropAspectRatio:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadView;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)keyboardChanged:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateUI;
-(id)initWithAccount:(id)arg1 ;
-(void)_hideKeyboard;
-(void)_updateImage;
-(void)save;
@end

