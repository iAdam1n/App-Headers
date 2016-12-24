/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMultiPeoplePickerViewController.h>
#import <Messenger/FBClassProvidable.h>

@class MNLoadingView, MNMontageAudienceManager, NSString;

@interface MNMontageAudiencePickerViewController : MNMultiPeoplePickerViewController <FBClassProvidable> {

	MNLoadingView* _loadingView;
	unsigned long long _audienceListType;
	MNMontageAudienceManager* _montageAudienceManager;

}

@property (assign,nonatomic) unsigned long long audienceListType;                            //@synthesize audienceListType=_audienceListType - In the implementation block
@property (nonatomic,retain) MNMontageAudienceManager * montageAudienceManager;              //@synthesize montageAudienceManager=_montageAudienceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peoplePickerSearchBarController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3 ;
-(void)peoplePickerSearchBarControllerDidChangePickedContacts:(id)arg1 ;
-(void)peoplePickerSearchBarController:(id)arg1 didDeselectContact:(id)arg2 ;
-(void)setAudienceListType:(unsigned long long)arg1 ;
-(void)setMontageAudienceManager:(MNMontageAudienceManager *)arg1 ;
-(void)_didTapRemoveAll:(id)arg1 ;
-(void)_didConfirmRemoveAll;
-(void)_didRemoveAllFinish;
-(void)_didRemoveAllFail;
-(unsigned long long)audienceListType;
-(MNMontageAudienceManager *)montageAudienceManager;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)_updateRightBarButtonItem;
@end
