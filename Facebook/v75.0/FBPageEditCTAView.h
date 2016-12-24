/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Facebook/FBKeyboardObserverDelegate.h>

@protocol FBPageEditCTAViewDelegateFBPageCTASecondaryDataSourceDelegateUITableViewDelegate, UITableViewDataSource;
@class NSMutableArray, UITableView, FBMemPageCreateCTAItem, NSString, FBPageCTALogger, FBKeyboardObserver, FBKeyboardTracker, FBPageCTASecondaryTableView, FBPageActionableLinkView;

@interface FBPageEditCTAView : UIView <UITableViewDelegate, UITableViewDataSource, FBKeyboardObserverDelegate> {

	NSMutableArray* _views;
	UITableView* _editCTATableView;
	FBMemPageCreateCTAItem* _ctaItem;
	NSString* _pagePhoneNumber;
	id<FBPageEditCTAViewDelegate><FBPageCTASecondaryDataSourceDelegate><UITableViewDelegate> _delegate;
	FBPageCTALogger* _logger;
	id<UITableViewDataSource> _dataSource;
	BOOL _canPromoteCTA;
	BOOL _hasActiveCTAPromotion;
	BOOL _shouldShowUpsellButton;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	UIEdgeInsets _contentInsets;
	BOOL _shouldShowDeleteButton;
	BOOL _shouldShowInsightsButton;
	unsigned long long _serviceSectionType;
	FBPageCTASecondaryTableView* _secondaryTableView;
	FBPageActionableLinkView* _promoteCTALink;
	FBPageActionableLinkView* _upsellCTALink;
	FBPageActionableLinkView* _changeCTALink;
	FBPageActionableLinkView* _deleteCTALink;
	FBPageActionableLinkView* _insightsCTALink;
	FBPageActionableLinkView* _servicesCTALink;

}

@property (nonatomic,retain) FBPageActionableLinkView * promoteCTALink;                     //@synthesize promoteCTALink=_promoteCTALink - In the implementation block
@property (nonatomic,retain) FBPageActionableLinkView * upsellCTALink;                      //@synthesize upsellCTALink=_upsellCTALink - In the implementation block
@property (nonatomic,retain) FBPageActionableLinkView * changeCTALink;                      //@synthesize changeCTALink=_changeCTALink - In the implementation block
@property (nonatomic,retain) FBPageActionableLinkView * deleteCTALink;                      //@synthesize deleteCTALink=_deleteCTALink - In the implementation block
@property (nonatomic,retain) FBPageActionableLinkView * insightsCTALink;                    //@synthesize insightsCTALink=_insightsCTALink - In the implementation block
@property (nonatomic,retain) FBPageActionableLinkView * servicesCTALink;                    //@synthesize servicesCTALink=_servicesCTALink - In the implementation block
@property (nonatomic,retain) FBPageCTASecondaryTableView * secondaryTableView;              //@synthesize secondaryTableView=_secondaryTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_configureViews:(CGRect)arg1 ;
-(void)_startKeyboardObserving;
-(void)_stopKeyboardObserving;
-(void)_updateEditCTATableViewFrame;
-(void)_promoteTapped;
-(void)_editTapped;
-(void)_deleteTapped;
-(void)_insightsButtonTapped;
-(void)_servicesButtonTapped;
-(FBPageActionableLinkView *)servicesCTALink;
-(FBPageActionableLinkView *)promoteCTALink;
-(FBPageActionableLinkView *)changeCTALink;
-(FBPageActionableLinkView *)deleteCTALink;
-(FBPageActionableLinkView *)insightsCTALink;
-(FBPageActionableLinkView *)upsellCTALink;
-(void)setSecondaryTableView:(FBPageCTASecondaryTableView *)arg1 ;
-(void)setPromoteCTALink:(FBPageActionableLinkView *)arg1 ;
-(void)setUpsellCTALink:(FBPageActionableLinkView *)arg1 ;
-(void)setChangeCTALink:(FBPageActionableLinkView *)arg1 ;
-(void)setDeleteCTALink:(FBPageActionableLinkView *)arg1 ;
-(void)setInsightsCTALink:(FBPageActionableLinkView *)arg1 ;
-(void)setServicesCTALink:(FBPageActionableLinkView *)arg1 ;
-(FBPageCTASecondaryTableView *)secondaryTableView;
-(id)initWithFrame:(CGRect)arg1 ctaItem:(id)arg2 pagePhoneNumber:(id)arg3 canPromoteCTA:(BOOL)arg4 hasActiveCTAPromotion:(BOOL)arg5 shouldShowDeleteButton:(BOOL)arg6 shouldShowInsightsButton:(BOOL)arg7 shouldShowUpsellButton:(BOOL)arg8 serviceSectionType:(unsigned long long)arg9 delegate:(id)arg10 dataSource:(id)arg11 logger:(id)arg12 ;
-(void)setNeedsUpdateEditCTAView;
-(void)layoutSubviews;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
