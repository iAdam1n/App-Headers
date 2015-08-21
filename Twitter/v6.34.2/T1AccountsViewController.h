/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNPickerViewController.h>
#import <Twitter/TFNPickerViewControllerDelegate.h>
#import <Twitter/TFNValuePickerDataSource.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>
#import <Twitter/TFNAdaptiveWizardFlowDelegate.h>
#import <Twitter/T1AccountAdder.h>
#import <Twitter/T1AccountChooser.h>

@class TFNTwitterAccount, NSArray, T1PickableAccountAdapter, NSString;

@interface T1AccountsViewController : TFNPickerViewController <TFNPickerViewControllerDelegate, TFNValuePickerDataSource, TFNLayoutMetricsEnvironment, TFNAdaptiveWizardFlowDelegate, T1AccountAdder, T1AccountChooser> {

	TFNTwitterAccount* _currentAccount;
	/*^block*/id _didChooseAccountBlock;
	/*^block*/id _didAddAccountBlock;
	NSArray* _accounts;
	T1PickableAccountAdapter* _adapter;

}

@property (nonatomic,retain) NSArray * accounts;                                //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,readonly) T1PickableAccountAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didAddAccountBlock;                               //@synthesize didAddAccountBlock=_didAddAccountBlock - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * currentAccount;                //@synthesize currentAccount=_currentAccount - In the implementation block
@property (nonatomic,copy) id didChooseAccountBlock;                            //@synthesize didChooseAccountBlock=_didChooseAccountBlock - In the implementation block
-(id)initWithDataSource:(id)arg1 options:(unsigned long long)arg2 ;
-(id)valuesForPicker:(id)arg1 ;
-(id)initiallyPickedValueForPicker:(id)arg1 ;
-(id)addValueMessageForPicker:(id)arg1 ;
-(id)showMoreValuesMessageForPicker:(id)arg1 ;
-(id)didAddAccountBlock;
-(void)setDidAddAccountBlock:(id)arg1 ;
-(TFNTwitterAccount *)currentAccount;
-(void)setCurrentAccount:(TFNTwitterAccount *)arg1 ;
-(void)setDidChooseAccountBlock:(id)arg1 ;
-(void)_updateAccounts:(BOOL)arg1 ;
-(void)_accountsDidChange;
-(id)didChooseAccountBlock;
-(void)_finishAddingAccount:(id)arg1 signUp:(BOOL)arg2 ;
-(void)_canNotUnenrollWithAccount:(id)arg1 ;
-(id)initAsEditable:(BOOL)arg1 ;
-(void)_pickAccount:(id)arg1 willDismiss:(BOOL)arg2 ;
-(void)_addAccountFromView:(id)arg1 ;
-(void)_prepareToRemoveAccount:(id)arg1 ;
-(void)pickerViewControllerDidCancel:(id)arg1 ;
-(void)pickerViewController:(id)arg1 didConfirmWithSections:(id)arg2 ;
-(void)pickerViewController:(id)arg1 didPickValue:(id)arg2 inSectionAtIndex:(unsigned long long)arg3 willConfirm:(BOOL)arg4 willDismiss:(BOOL)arg5 ;
-(void)pickerViewController:(id)arg1 willAddValueToSectionAtIndex:(unsigned long long)arg2 sender:(id)arg3 ;
-(BOOL)pickerViewController:(id)arg1 shouldRemoveValue:(id)arg2 fromSectionAtIndex:(unsigned long long)arg3 ;
-(void)pickerViewController:(id)arg1 didRemoveValue:(id)arg2 fromSectionAtIndex:(unsigned long long)arg3 ;
-(void)pickerViewController:(id)arg1 didReorderValue:(id)arg2 fromPosition:(unsigned long long)arg3 toPosition:(unsigned long long)arg4 inSectionAtIndex:(unsigned long long)arg5 ;
-(void)pickerViewControllerWillShowMoreValues:(id)arg1 ;
-(void)flowDidComplete:(id)arg1 ;
-(void)_showSystemAccountRemovalAlert;
-(id)titleForDeleteConfirmationButtonForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(double)minContentHeight;
-(double)maxContentHeight;
-(T1PickableAccountAdapter *)adapter;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_updateButtons;
-(void)_addAccount:(BOOL)arg1 ;
-(NSArray *)accounts;
-(void)_removeAccount:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
@end

