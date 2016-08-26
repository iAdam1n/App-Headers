/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>

@class FBUserSession, UILabel, UIView, UIButton, UICollectionView, NSArray, NSString;

@interface FBProductionPromptShareResponseViewController : UIViewController <UICollectionViewDataSource> {

	FBUserSession* _session;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _friendsDescriptionLabel;
	UIView* _profilePicTableView;
	UIView* _splitLineView;
	UIView* _contentView;
	UIButton* _confirmButton;
	UICollectionView* _picturesCollectionView;
	NSArray* _recipients;

}

@property (nonatomic,copy) NSArray * recipients;                    //@synthesize recipients=_recipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)_didTapConfirmButton:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateContent;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
@end
