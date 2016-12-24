/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUITableViewController.h>
#import <eBay/EBNPagedResultsDataManagerObserver.h>
#import <UIKit/UIScrollViewDelegate.h>

@class EBNCollectionsDataManager, EBULoadingToastView, EUIButton, EBNImageReference, EUIImageView, EUILabel, EUITextField, NSString;

@interface EBUAddToCollectionViewController : EUITableViewController <EBNPagedResultsDataManagerObserver, UIScrollViewDelegate> {

	BOOL _collectionsNeedLoading;
	BOOL _onboardingViewHasLoaded;
	BOOL _firstCollectionsArrived;
	BOOL _collectionItemForCollectionArrived;
	EBNCollectionsDataManager* _collectionsDataManager;
	EBULoadingToastView* _progressView;
	EUIButton* _collectionButton;
	EBNImageReference* _collectionImageReference;
	EUIImageView* _collectionImageView;
	EUILabel* _collectionTitlePlaceholder;
	EUITextField* _collectionTitleField;
	NSString* _listingID;
	NSString* _variationID;

}

@property (nonatomic,retain) EBNCollectionsDataManager * collectionsDataManager;               //@synthesize collectionsDataManager=_collectionsDataManager - In the implementation block
@property (nonatomic,retain) EBULoadingToastView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) EUIButton * collectionButton;                              //@synthesize collectionButton=_collectionButton - In the implementation block
@property (assign,nonatomic,__weak) EBNImageReference * collectionImageReference;              //@synthesize collectionImageReference=_collectionImageReference - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * collectionImageView;                        //@synthesize collectionImageView=_collectionImageView - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * collectionTitlePlaceholder;                     //@synthesize collectionTitlePlaceholder=_collectionTitlePlaceholder - In the implementation block
@property (assign,nonatomic,__weak) EUITextField * collectionTitleField;                       //@synthesize collectionTitleField=_collectionTitleField - In the implementation block
@property (nonatomic,copy) NSString * listingID;                                               //@synthesize listingID=_listingID - In the implementation block
@property (nonatomic,copy) NSString * variationID;                                             //@synthesize variationID=_variationID - In the implementation block
@property (assign,nonatomic) BOOL collectionsNeedLoading;                                      //@synthesize collectionsNeedLoading=_collectionsNeedLoading - In the implementation block
@property (assign,nonatomic) BOOL onboardingViewHasLoaded;                                     //@synthesize onboardingViewHasLoaded=_onboardingViewHasLoaded - In the implementation block
@property (assign,nonatomic) BOOL firstCollectionsArrived;                                     //@synthesize firstCollectionsArrived=_firstCollectionsArrived - In the implementation block
@property (assign,nonatomic) BOOL collectionItemForCollectionArrived;                          //@synthesize collectionItemForCollectionArrived=_collectionItemForCollectionArrived - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCollectionImageView:(EUIImageView *)arg1 ;
-(void)setCollectionTitlePlaceholder:(EUILabel *)arg1 ;
-(void)setCollectionTitleField:(EUITextField *)arg1 ;
-(void)setCollectionButton:(EUIButton *)arg1 ;
-(EUIImageView *)collectionImageView;
-(EUILabel *)collectionTitlePlaceholder;
-(EUITextField *)collectionTitleField;
-(EUIButton *)collectionButton;
-(id)collectionForIndexPath:(id)arg1 ;
-(void)setCollectionsNeedLoading:(BOOL)arg1 ;
-(EBNCollectionsDataManager *)collectionsDataManager;
-(void)setFirstCollectionsArrived:(BOOL)arg1 ;
-(void)setCollectionItemForCollectionArrived:(BOOL)arg1 ;
-(BOOL)collectionsNeedLoading;
-(BOOL)firstCollectionsArrived;
-(BOOL)collectionItemForCollectionArrived;
-(void)checkAsyncRequestsToReloadTableView;
-(BOOL)onboardingViewHasLoaded;
-(void)setOnboardingViewHasLoaded:(BOOL)arg1 ;
-(void)presentOnboardingView;
-(void)createCollectionButtonAction:(id)arg1 ;
-(EBNImageReference *)collectionImageReference;
-(void)endCreateCollection;
-(id)initWithUserID:(id)arg1 listingID:(id)arg2 variationID:(id)arg3 listingImage:(id)arg4 ;
-(void)setCollectionsDataManager:(EBNCollectionsDataManager *)arg1 ;
-(void)setCollectionImageReference:(EBNImageReference *)arg1 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(NSString *)listingID;
-(void)setListingID:(NSString *)arg1 ;
-(NSString *)variationID;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)setVariationID:(NSString *)arg1 ;
-(BOOL)presentError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pagedDataManagerDidFindItems:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(EBULoadingToastView *)progressView;
-(void)setProgressView:(EBULoadingToastView *)arg1 ;
@end
