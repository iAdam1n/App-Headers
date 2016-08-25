/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAContactGridViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <WhatsApp/WAContactGridViewControllerDataSource.h>
#import <WhatsApp/WAContactGridViewControllerDelegate.h>
#import <WhatsApp/WebImagePickerDelegate.h>
#import <WhatsApp/WASinglePhotoPickerControllerDelegate.h>

@protocol WAGroupComposerDelegate;
@class NSMutableArray, WADoneWithSpinnerBarButtonItem, WANewGroupHeaderView, UICollectionViewCell, UILabel, NSArray, NSString;

@interface WAGroupComposerViewController : WAContactGridViewController <UICollectionViewDelegateFlowLayout, WAContactGridViewControllerDataSource, WAContactGridViewControllerDelegate, WebImagePickerDelegate, WASinglePhotoPickerControllerDelegate> {

	NSMutableArray* _contacts;
	id<WAGroupComposerDelegate> _composerDelegate;
	WADoneWithSpinnerBarButtonItem* _doneButton;
	WANewGroupHeaderView* _headerView;
	UICollectionViewCell* _headerViewCell;
	UILabel* _contactsGridSectionTitleLabel;

}

@property (nonatomic,retain) WADoneWithSpinnerBarButtonItem * doneButton;                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) WANewGroupHeaderView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * headerViewCell;                            //@synthesize headerViewCell=_headerViewCell - In the implementation block
@property (nonatomic,retain) UILabel * contactsGridSectionTitleLabel;                          //@synthesize contactsGridSectionTitleLabel=_contactsGridSectionTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<WAGroupComposerDelegate> composerDelegate;              //@synthesize composerDelegate=_composerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * contacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactsGridTitleFont;
-(void)doneAction:(id)arg1 ;
-(void)fontSizeDidChange:(id)arg1 ;
-(void)showImagePickerForSourceType:(long long)arg1 ;
-(void)showImageSearchController;
-(void)reallyShowImagePickerForSourceType:(long long)arg1 ;
-(void)singlePhotoPickerControllerDidCancel:(id)arg1 ;
-(void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)webImagePicker:(id)arg1 didSelectImage:(id)arg2 ;
-(void)webImagePickerDidCancel:(id)arg1 ;
-(unsigned long long)numberOfContactsInContactGridViewController:(id)arg1 ;
-(id)contactGridViewController:(id)arg1 contactAtIndex:(unsigned long long)arg2 ;
-(void)contactGridViewController:(id)arg1 requestedToDeleteContactAtIndex:(unsigned long long)arg2 ;
-(id)initWithScrollDirection:(long long)arg1 ;
-(void)editGroupPicture;
-(void)subjectTextFieldEditingChanged:(id)arg1 ;
-(void)setContactsGridSectionTitleLabel:(UILabel *)arg1 ;
-(UILabel *)contactsGridSectionTitleLabel;
-(void)updateInterfaceOnParticipantListChange;
-(void)validateGroup;
-(id<WAGroupComposerDelegate>)composerDelegate;
-(id)collectionViewIndexPathForContactIndex:(unsigned long long)arg1 ;
-(void)setComposerDelegate:(id<WAGroupComposerDelegate>)arg1 ;
-(UICollectionViewCell *)headerViewCell;
-(void)setHeaderViewCell:(UICollectionViewCell *)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(WANewGroupHeaderView *)headerView;
-(void)setHeaderView:(WANewGroupHeaderView *)arg1 ;
-(void)setDoneButton:(WADoneWithSpinnerBarButtonItem *)arg1 ;
-(WADoneWithSpinnerBarButtonItem *)doneButton;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end

