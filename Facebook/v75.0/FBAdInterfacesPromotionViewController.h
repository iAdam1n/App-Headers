/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBAdInterfacesPromotionControllerDelegate.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceAnimationDelegate.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceEventListener.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBAdPaymentsSettleAccountFlowControllerDelegate.h>
#import <Facebook/FBAdInterfacesAdCreativeViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesActionConfirmationViewControllerDelegate.h>
#import <Facebook/FBAdPaymentsFlowContext.h>
#import <Facebook/FBAdPaymentsFlowControllerDelegate.h>
#import <Facebook/FBAdInterfacesInstagramAdPreviewViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesEditBudgetDurationViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesAddBudgetAndDurationViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesAdCreativeImagePickerControllerDelegate.h>
#import <Facebook/FBAdInterfacesActionHandlerProtocol.h>
#import <Facebook/FBAdInterfacesEditAudienceViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesEditTargetingViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesCreateAudienceViewControllerDelegate.h>

@class FBAdInterfacesPromotionDataModel, FBComponentTableViewDataSource, FBMemPage, FBUserSession, FBTransientViewStateManager, FBKeyboardObserver, FBKeyboardFocusedViewDisplayer, FBNuxController, FBAdInterfacesComponentProviderContext, FBAdPaymentsSettleAccountFlowController, FBAdInterfacesLocalTargetingController, FBAdInterfacesTutorialController, NSMutableDictionary, FBAdInterfacesAYMTActionData, FBAdInterfacesCouponClaimInfo, NSString, FBAdInterfacesInstagramAdPreviewViewController, FBAdInterfacesEditAudienceViewController, FBAdInterfacesAdCreativeImagePickerController, FBAdInterfacesPromotionController, FBAdInterfacesComponentToolbox, FBFeedToolbox, UITableView, FBAdInterfacesPlacementInfo, NSURL, CKComponentHostingView, NSOrderedSet, FBAdPaymentsFlowController, FBAdInterfacesLogger, NSSet;

@interface FBAdInterfacesPromotionViewController : UIViewController <FBAdInterfacesPromotionControllerDelegate, CKComponentHostingViewDelegate, FBComponentScrollEventListener, FBComponentTableViewDataSourceAnimationDelegate, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceEventListener, FBKeyboardObserverDelegate, UIAlertViewDelegate, FBAdPaymentsSettleAccountFlowControllerDelegate, FBAdInterfacesAdCreativeViewControllerDelegate, FBAdInterfacesActionConfirmationViewControllerDelegate, FBAdPaymentsFlowContext, FBAdPaymentsFlowControllerDelegate, FBAdInterfacesInstagramAdPreviewViewControllerDelegate, FBAdInterfacesEditBudgetDurationViewControllerDelegate, FBAdInterfacesAddBudgetAndDurationViewControllerDelegate, FBAdInterfacesAdCreativeImagePickerControllerDelegate, FBAdInterfacesActionHandlerProtocol, FBAdInterfacesEditAudienceViewControllerDelegate, FBAdInterfacesEditTargetingViewControllerDelegate, FBAdInterfacesCreateAudienceViewControllerDelegate> {

	FBComponentTableViewDataSource* _tableViewDataSource;
	FBMemPage* _page;
	FBUserSession* _session;
	FBTransientViewStateManager* _viewStateManager;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardFocusedViewDisplayer* _keyboardFocusedViewDisplayer;
	FBNuxController* _helpNuxController;
	BOOL _reloadDataAfterApplyingChangeset;
	BOOL _performDialogReadyActionAfterApplyingChangeset;
	BOOL _promotionControllerDidInitializeOnce;
	BOOL _isKeyboardVisible;
	FBAdInterfacesComponentProviderContext* _componentProviderContext;
	FBAdPaymentsSettleAccountFlowController* _settleAccountFlowController;
	FBAdInterfacesLocalTargetingController* _localTargetingController;
	FBAdInterfacesTutorialController* _tutorialController;
	NSMutableDictionary* _tipVisibilityState;
	FBAdInterfacesAYMTActionData* _actionData;
	FBAdInterfacesCouponClaimInfo* _couponClaimInfo;
	NSString* _sectionForAutoScroll;
	FBAdInterfacesInstagramAdPreviewViewController* _instagramAdPreviewViewController;
	FBAdInterfacesEditAudienceViewController* _editAudienceViewController;
	FBAdInterfacesAdCreativeImagePickerController* _imagePickerController;
	FBAdInterfacesPromotionController* _promotionController;
	FBAdInterfacesComponentToolbox* _toolbox;
	FBFeedToolbox* _feedComponentToolbox;
	UITableView* _tableView;
	FBAdInterfacesPlacementInfo* _placementInfo;
	NSURL* _helpCenterURL;
	CKComponentHostingView* _footerView;
	CKComponentHostingView* _headerView;
	NSOrderedSet* _orderedComponents;
	FBAdPaymentsFlowController* _paymentsFlowController;

}

@property (nonatomic,readonly) FBAdInterfacesLogger * logger; 
@property (nonatomic,readonly) NSOrderedSet * orderedComponents; 
@property (nonatomic,retain) UITableView * tableView;                                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) CKComponentHostingView * footerView;                                                   //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) CKComponentHostingView * headerView;                                                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) FBAdInterfacesComponentToolbox * toolbox;                                              //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * feedComponentToolbox;                                                  //@synthesize feedComponentToolbox=_feedComponentToolbox - In the implementation block
@property (nonatomic,retain) FBAdInterfacesPlacementInfo * placementInfo;                                           //@synthesize placementInfo=_placementInfo - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * orderedComponents;                                                    //@synthesize orderedComponents=_orderedComponents - In the implementation block
@property (nonatomic,retain) FBAdPaymentsFlowController * paymentsFlowController;                                   //@synthesize paymentsFlowController=_paymentsFlowController - In the implementation block
@property (nonatomic,retain) FBAdInterfacesPromotionController * promotionController;                               //@synthesize promotionController=_promotionController - In the implementation block
@property (nonatomic,readonly) FBMemPage * page;                                                                    //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBTransientViewStateManager * viewStateManager;                                      //@synthesize viewStateManager=_viewStateManager - In the implementation block
@property (nonatomic,readonly) FBComponentTableViewDataSource * tableViewDataSource;                                //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (nonatomic,readonly) FBAdInterfacesSummaryActionConfigurations overviewActionConfigurations; 
@property (nonatomic,copy,readonly) NSSet * overviewDisclosableSections; 
@property (nonatomic,readonly) NSURL * helpCenterURL;                                                               //@synthesize helpCenterURL=_helpCenterURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBAdInterfacesPromotionDataModel * dataModel; 
+(SEL)adPreviewEditAction;
+(SEL)budgetChangeAction;
+(SEL)currencyChangeAction;
+(SEL)tipToggleAction;
+(SEL)selectBudgetAndDurationAction;
+(SEL)selectCustomBudgetAndDurationAction;
+(SEL)addBudgetButtonAction;
+(SEL)durationChangeAction;
+(SEL)objectiveChangeAction;
+(SEL)deletePromotionAction;
+(SEL)pacingChangeAction;
+(SEL)messageLinkTappedAction;
+(SEL)scrollToValidationErrorAction;
+(SEL)logMessageAction;
+(SEL)resumePromotionAction;
+(SEL)openInsightsAction;
+(SEL)toggleInstagramPlacementAction;
+(SEL)fetchMoreUnifiedAudiencesAction;
+(SEL)openInstagramPreviewAction;
+(SEL)openInstagramPermalinkAction;
+(SEL)seeAllAudiencesAction;
+(SEL)createAudienceAction;
+(SEL)editTargetingAction;
+(SEL)logImpressionAction;
+(SEL)audienceChangeAction;
+(SEL)targetingChangeAction;
+(SEL)accountChangeAction;
+(SEL)conversionPixelChangeAction;
+(SEL)footerActionButtonAction;
+(SEL)pausePromotionAction;
+(SEL)openCampaignInsightsAction;
+(SEL)addPaymentMethodAction;
+(SEL)fundAccountAction;
+(SEL)settleAccountAction;
+(SEL)openAdStoryPermalinkAction;
+(SEL)overviewSectionTapAction;
+(SEL)saveAudienceAction;
+(SEL)updateSavedAudienceSelectedAction;
+(SEL)updateSavedAudienceNameAction;
+(SEL)audienceDetailsEditAction;
+(SEL)seeAdPreviewAction;
+(SEL)budgetDurationEditAction;
+(SEL)overviewReceiptTapAction;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(FBAdInterfacesComponentToolbox *)toolbox;
-(FBTransientViewStateManager *)viewStateManager;
-(BOOL)fb_showNavBarSearchField;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(SEL)fb_actionForBackArrowButton;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(FBFeedToolbox *)feedComponentToolbox;
-(id)initWithSession:(id)arg1 page:(id)arg2 aymtActionData:(id)arg3 placement:(id)arg4 couponClaimInfo:(id)arg5 sectionForAutoScroll:(id)arg6 ;
-(unsigned long long)budgetType;
-(BOOL)fb_hideNavBarRightButton;
-(BOOL)fb_hidesTabBar;
-(void)setToolbox:(FBAdInterfacesComponentToolbox *)arg1 ;
-(void)didTapBackButton;
-(void)setFeedComponentToolbox:(FBFeedToolbox *)arg1 ;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(BOOL)shouldShowFooter;
-(unsigned long long)feedLayoutIdiom;
-(BOOL)dataSource:(id)arg1 shouldAnimateApplicationOfChangeset:(const Changeset*)arg2 ;
-(Class)componentProvider;
-(FBComponentTableViewDataSource *)tableViewDataSource;
-(FBComponentTableViewDataSourceAnimationContext)dataSource:(id)arg1 rowAnimationContextForChangeset:(const Changeset*)arg2 ;
-(id)mutator;
-(void)footerActionButtonTapped:(id)arg1 ;
-(unsigned long long)promotionAction;
-(id)tipCopyForTag:(long long)arg1 ;
-(id)availableTipTags;
-(BOOL)isTipWithTagVisible:(long long)arg1 ;
-(NSOrderedSet *)orderedComponents;
-(FBAdInterfacesPromotionController *)promotionController;
-(BOOL)hasAnyValidAccounts;
-(BOOL)isSelectedAccountUnsettled:(id)arg1 ;
-(FBAdInterfacesPlacementInfo *)placementInfo;
-(id)boostedComponentApp;
-(void)objectivePickerComponent:(id)arg1 didChangeOption:(id)arg2 ;
-(void)scrollToComponent:(long long)arg1 ;
-(void)setupPromotionController;
-(void)promotionControllerDidUpdatePromotion:(id)arg1 ;
-(void)promotionDataModelDidInitialize:(id)arg1 ;
-(void)overviewComponent:(id)arg1 didTapSection:(id)arg2 ;
-(unsigned long long)totalComponentCount;
-(unsigned long long)componentForBoostedComponentSpecElement:(unsigned long long)arg1 ;
-(id)componentModels;
-(id)addPaymentMessage;
-(id)addPaymentButtonTitle;
-(id)requestProvider;
-(id)promotableObjectID;
-(id)footerButtonTitle:(id)arg1 ;
-(BOOL)isFooterButtonEnabled:(id)arg1 ;
-(void)viewMoreInsightsTapped:(id)arg1 ;
-(unsigned long long)creativeViewControllerConfiguration;
-(BOOL)canHandleNavigationAction:(id)arg1 ;
-(FBAdInterfacesSummaryActionConfigurations)overviewActionConfigurations;
-(NSSet *)overviewDisclosableSections;
-(id)adPreviewForDisplay;
-(BOOL)shouldShowHeader;
-(id)tutorialSteps;
-(void)viewDetailedCampaignResultsTapped:(id)arg1 ;
-(void)editAudience;
-(void)editAudienceViewController:(id)arg1 didFinishWithAudienceOption:(id)arg2 targetingSpec:(id)arg3 editExistingPromotion:(BOOL)arg4 ;
-(void)createAudience:(id)arg1 ;
-(void)editTargetingWithSelectedAudienceOption:(id)arg1 ;
-(unsigned long long)topComponentForAutoScroll;
-(long long)paymentFlowMode:(BOOL)arg1 ;
-(id)tutorialTooltipContent;
-(void)promotionController:(id)arg1 didUpdateDataModel:(id)arg2 ;
-(id)pausePromotionAlertView;
-(id)deletePromotionAlertView;
-(void)handleNavigationAction:(id)arg1 ;
-(void)setupTableViewDataSource;
-(void)setupTableViewOverlayFooter;
-(id)_componentProviderContext;
-(void)updateInsetsForFooterHeight:(double)arg1 ;
-(void)setupPromotionControllerWithSavedSettingsRestoration:(BOOL)arg1 ;
-(void)targetingComponent:(id)arg1 didChangeTargetingSpec:(id)arg2 ;
-(BOOL)canHandleAction:(id)arg1 ;
-(id)footerTitle:(id)arg1 ;
-(id)pageURLString;
-(NSURL *)helpCenterURL;
-(id)targetingComponentConfigurationsForAudienceOption:(id)arg1 targetingSpec:(id)arg2 ;
-(id)headerModelWithDataModel:(id)arg1 ;
-(unsigned long long)instagramAccountType;
-(BOOL)canShowInstagramPlacement;
-(id)adAccount;
-(void)handleActionForMessage:(id)arg1 ;
-(BOOL)adCreativeImagePickerController:(id)arg1 shouldUploadImage:(id)arg2 ;
-(void)adCreativeImagePickerController:(id)arg1 didUploadImage:(id)arg2 withResponse:(id)arg3 ;
-(void)adCreativeImagePickerController:(id)arg1 didFailToUploadWithError:(id)arg2 ;
-(void)promotionControllerDidCreateSavedAudience:(id)arg1 ;
-(void)promotionControllerDidInitialize:(id)arg1 ;
-(void)promotionControllerDidPerformValidation:(id)arg1 ;
-(void)editSavedAudienceWithAudienceOption:(id)arg1 andName:(id)arg2 ;
-(void)promotionControllerDidEditSavedAudience:(id)arg1 ;
-(void)showTutorial;
-(void)seeAdPreviewTapped:(id)arg1 ;
-(void)actionConfirmationViewController:(id)arg1 didFinishWithAction:(id)arg2 ;
-(void)adCreativeViewController:(id)arg1 didFinishWithCreativeSpec:(id)arg2 creativeImage:(id)arg3 callToActions:(id)arg4 urlValidationError:(id)arg5 ;
-(void)addBudgetAndDurationViewController:(id)arg1 didFinishWithBudget:(id)arg2 duration:(unsigned long long)arg3 ;
-(void)setupKeyboardObserver;
-(void)logMessage:(id)arg1 withContext:(id)arg2 ;
-(void)createAudienceViewController:(id)arg1 didFinishWithAudienceOption:(id)arg2 withAudienceName:(id)arg3 ;
-(void)editBudgetDurationViewController:(id)arg1 didFinishWithBudget:(id)arg2 duration:(unsigned long long)arg3 ;
-(void)toggleTip:(id)arg1 ;
-(void)editTargetingViewController:(id)arg1 didFinishWithTargetingSpec:(id)arg2 ;
-(void)setupToolbox;
-(void)setupViewStateManager;
-(void)setupTableViewOverlayHeader;
-(void)hideHeader;
-(void)updateInsetsForHeaderHeight:(double)arg1 ;
-(void)setInstagramOptoutOption:(BOOL)arg1 ;
-(void)openInstagramPreview:(id)arg1 ;
-(void)openInstagramPermalink:(id)arg1 ;
-(void)setupLocalTargetingController;
-(void)_logAYMTTipClick;
-(void)_logDialogCancel;
-(void)paymentMethodUIViewControllerDidFinish:(id)arg1 canceled:(BOOL)arg2 ;
-(FBAdPaymentsFlowController *)paymentsFlowController;
-(void)setPaymentsFlowController:(FBAdPaymentsFlowController *)arg1 ;
-(void)startPrepayFundingFlow;
-(void)setPromotionController:(FBAdInterfacesPromotionController *)arg1 ;
-(unsigned long long)sectionForComponent:(long long)arg1 ;
-(id)footerModelWithDataModel:(id)arg1 ;
-(void)updateFooterVisibility;
-(void)updateHeaderVisibility;
-(id)_removeEditableComponents:(id)arg1 ;
-(void)didTapEditAdPreviewImage;
-(void)hideFooter;
-(void)_performDialogReadyAction;
-(BOOL)shouldHideHeaderOnScroll;
-(void)hideHeaderWithScrollView:(CGPoint)arg1 ;
-(void)seeAllAudiences:(id)arg1 ;
-(void)editTargeting:(id)arg1 ;
-(void)addBudgetButtonActionTapped:(id)arg1 ;
-(void)messageComponent:(id)arg1 didTapLink:(id)arg2 ;
-(void)logImpression:(id)arg1 withMessage:(id)arg2 ;
-(void)audiencePicker:(id)arg1 didSelectAudienceOption:(id)arg2 ;
-(void)budgetPicker:(id)arg1 didSelectBudget:(id)arg2 ;
-(void)pacingComponent:(id)arg1 didSelectPacingInfo:(id)arg2 ;
-(void)accountComponent:(id)arg1 didSelectAccount:(id)arg2 ;
-(void)conversionPixelComponent:(id)arg1 didSelectConversionPixel:(id)arg2 ;
-(void)pausePromotionButtonTapped:(id)arg1 ;
-(void)resumePromotionButtonTapped:(id)arg1 ;
-(void)deletePromotionButtonTapped:(id)arg1 ;
-(void)addPaymentMethod:(id)arg1 ;
-(void)fundAccountBalance:(id)arg1 ;
-(void)settleAccount:(id)arg1 withCheckingResults:(id)arg2 ;
-(void)scrollToValidationError:(id)arg1 ;
-(void)currencySelectorComponent:(id)arg1 didSelectCurrency:(id)arg2 ;
-(void)fetchMoreUnfiedAudiences:(id)arg1 ;
-(void)openAdStoryPermalink:(id)arg1 ;
-(void)saveAudienceComponent:(id)arg1 didTapSaveWithAudienceName:(id)arg2 ;
-(void)updateSavedAudienceSelected:(id)arg1 selected:(id)arg2 ;
-(void)updateSavedAudienceName:(id)arg1 audienceName:(id)arg2 ;
-(void)budgetAndDurationComponent:(id)arg1 didSelectOption:(id)arg2 ;
-(void)budgetAndDurationComponentDidSelectCustomOption:(id)arg1 ;
-(void)toggleInstagramPlacementAction:(id)arg1 ;
-(void)openEditTargetingVCWithAudienceOption:(id)arg1 ;
-(void)fetchGeoLocationWithTargetingSpec:(id)arg1 ;
-(void)startPaymentMethodFlow;
-(void)_updateTutorialAvailability;
-(void)_updateToolboxWithUpdatedData;
-(void)_logDialogOpen;
-(void)_performScrolling;
-(BOOL)_scrollToSectionIfPossible:(long long)arg1 ;
-(void)didTapEditAdPreview;
-(void)didTapEditBudgetDuration;
-(void)didTapOverviewReceipt;
-(void)openEditAudienceVCWithSelectedTargetingSpec:(id)arg1 audienceOption:(id)arg2 ;
-(void)openEditCreativeVCWithAutoOpenImagePicker:(BOOL)arg1 ;
-(void)openEditBudgetDurationVC;
-(void)_showLeaveConfirmationAlertWithExperiment:(id)arg1 ;
-(BOOL)canHandleApplySpecAction:(id)arg1 ;
-(void)handleApplySpecActionForMessage:(id)arg1 ;
-(void)handleApplySpecActionForInactivePromotion:(id)arg1 ;
-(void)handleApplySpecActionForRunningPromotion:(id)arg1 ;
-(void)openActionConfirmationViewControllerForMessage:(id)arg1 ;
-(void)showBudgetChangeConfirmationPopup:(id)arg1 ;
-(void)showDurationChangeConfirmationPopup:(unsigned long long)arg1 ;
-(void)updateLocalTargetingWithLocation:(id)arg1 ;
-(void)adPaymentsSettleAccountFlowController:(id)arg1 didCompleteSettleFlowWithSuccess:(BOOL)arg2 ;
-(id)flowPresentingViewController;
-(long long)adPaymentFlowMode;
-(id)adPaymentsBudgetCollectedData;
-(id)adPaymentsAdPreviewCollectedData;
-(id)adPaymentsEstimateResultsCollectedData;
-(unsigned long long)adDuration;
-(void)adPaymentsFlowControllerDidCancel:(id)arg1 ;
-(void)adPaymentsFlowControllerDidComplete:(id)arg1 checkoutCampaignGroupID:(id)arg2 checkoutPaymentIDs:(id)arg3 ;
-(void)setPlacementInfo:(FBAdInterfacesPlacementInfo *)arg1 ;
-(void)scheduleComponent:(id)arg1 didSelectDuration:(id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(id)title;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(CKComponentHostingView *)headerView;
-(void)setHeaderView:(CKComponentHostingView *)arg1 ;
-(FBMemPage *)page;
-(CKComponentHostingView *)footerView;
-(void)setFooterView:(CKComponentHostingView *)arg1 ;
-(id)validator;
-(id)pageID;
-(FBUserSession *)session;
-(FBAdInterfacesPromotionDataModel *)dataModel;
-(FBAdInterfacesLogger *)logger;
-(void)showHeader;
-(void)showFooter;
@end
