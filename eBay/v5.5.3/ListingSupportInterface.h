/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/ListingSupportInterfaceDelegate.h>

@class SellingKeyboardTableViewController, UIView, EUIAlertControllerWrapper, NSString;

@interface ListingSupportInterface : NSObject <ListingSupportInterfaceDelegate> {

	SellingKeyboardTableViewController* _loadingOverlayController;
	UIView* _loadingOverlayParentView;
	EUIAlertControllerWrapper* _alertController;

}

@property (nonatomic,retain) EUIAlertControllerWrapper * alertController;                                       //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SellingKeyboardTableViewController * loadingOverlayController;              //@synthesize loadingOverlayController=_loadingOverlayController - In the implementation block
@property (assign,nonatomic,__weak) UIView * loadingOverlayParentView;                                          //@synthesize loadingOverlayParentView=_loadingOverlayParentView - In the implementation block
@property (assign,nonatomic) BOOL sellingModalState; 
+(id)sharedInstance;
-(UIView *)loadingOverlayParentView;
-(void)viewAuctionEndEarlyInfo;
-(void)viewSellerFeesInfo;
-(void)viewShipToFundInfo:(id)arg1 ;
-(void)viewPriceGuaranteeTerms;
-(void)presentWebFlow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SellingKeyboardTableViewController *)loadingOverlayController;
-(void)viewCharityTermsAndConditions;
-(void)viewCharityFeePolicy;
-(void)showListingTypeChangeNotAllowedAlert;
-(void)setLoadingOverlayParentView:(UIView *)arg1 ;
-(void)setLoadingOverlayController:(SellingKeyboardTableViewController *)arg1 ;
-(void)applyThemeToSectionHeaderView:(id)arg1 ;
-(void)startRemedyFlow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startEFTSetupFlow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showShippingGuaranteeDialogInViewController:(id)arg1 cancelButtonHandler:(/*^block*/id)arg2 okButtonHandler:(/*^block*/id)arg3 ;
-(void)showDonationErrorForVerifyResult:(id)arg1 errorCode:(long long)arg2 ;
-(void)showEmailAddressNotLinkedToPayPalAlert:(id)arg1 ;
-(void)showUPIRequiredDialog:(id)arg1 inViewController:(id)arg2 completionButtonHandler:(/*^block*/id)arg3 ;
-(id)sellingPhaseForError:(id)arg1 ;
-(void)openURL:(id)arg1 withTitle:(id)arg2 ;
-(id)sellingPhaseForError:(long long)arg1 inputRefId:(id)arg2 phaseMapping:(id)arg3 ;
-(void)showUnsupportedCategoryAlertAllowingUserToContinue:(BOOL)arg1 ;
-(void)showInvalidDraftAlert;
-(void)showNoLDSResponseError;
-(void)showClassifiedAdFormatNotSupportedAlert;
-(id)loadingOverlayTextForOperation:(id)arg1 ;
-(void)showUnsupportedCategoryAlertForCategoryName:(id)arg1 ;
-(BOOL)sellingModalState;
-(void)setSellingModalState:(BOOL)arg1 ;
-(void)incrementLoadingOverlay:(id)arg1 ;
-(void)styleLoadingToastForOperation:(id)arg1 ;
-(void)decrementLoadingOverlay:(id)arg1 ;
-(void)validateDraftAfterOperationCompleted:(id)arg1 ;
-(void)setLoadingOverlayText:(id)arg1 ;
-(BOOL)showAlertIfMaximumNumberOfDraftsReached;
-(void)showUnsupportedCategoryAlertForCategoryIDPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAlertController:(EUIAlertControllerWrapper *)arg1 ;
-(EUIAlertControllerWrapper *)alertController;
-(void)removeOverlay;
@end
