/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectShareManagerDataSource.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/FBKeyboardObserverDelegate.h>

@class IGDirectThread, IGTokenField, IGDirectShareManager, FBKeyboardObserver, UIBarButtonItem, NSString;

@interface IGDirectAddPeopleViewController : IGViewController <IGDirectShareManagerDataSource, IGTokenFieldDelegate, FBKeyboardObserverDelegate> {

	IGDirectThread* _thread;
	IGTokenField* _tokenField;
	IGDirectShareManager* _shareManager;
	FBKeyboardObserver* _keyboardObserver;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) IGDirectThread * thread;                            //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                          //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) IGDirectShareManager * shareManager;                //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;              //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentQueryForManager:(id)arg1 ;
-(id)recipientsForManager:(id)arg1 ;
-(BOOL)manager:(id)arg1 wantsToSelectUser:(id)arg2 ;
-(void)manager:(id)arg1 triedToAddFilteredUser:(id)arg2 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)doneTapped;
-(void)updateDoneButtonState;
-(void)setShareManager:(IGDirectShareManager *)arg1 ;
-(IGDirectShareManager *)shareManager;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(FBKeyboardObserver *)keyboardObserver;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(BOOL)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(id)initWithThread:(id)arg1 ;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(IGDirectThread *)thread;
-(void)setThread:(IGDirectThread *)arg1 ;
@end
