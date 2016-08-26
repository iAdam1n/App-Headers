/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesBaseEditViewController.h>
#import <Facebook/FBAdInterfacesEditBudgetViewControllerDelegate.h>
#import <Facebook/FBAdInterfacesEditScheduleViewControllerDelegate.h>

@protocol FBAdInterfacesActionConfirmationViewControllerDelegate;
@class FBAdInterfacesMessage, NSString, FBAdInterfacesPromotionDataModel;

@interface FBAdInterfacesActionConfirmationViewController : FBAdInterfacesBaseEditViewController <FBAdInterfacesEditBudgetViewControllerDelegate, FBAdInterfacesEditScheduleViewControllerDelegate> {

	BOOL _canShowInstagramPlacement;
	FBAdInterfacesMessage* _message;
	id<FBAdInterfacesActionConfirmationViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBAdInterfacesMessage * message;                                                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<FBAdInterfacesActionConfirmationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canShowInstagramPlacement;                                                          //@synthesize canShowInstagramPlacement=_canShowInstagramPlacement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBAdInterfacesPromotionDataModel * dataModel; 
+(id)durationSuggestions;
+(id)componentWithModel:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldShowFooter;
-(void)didTapSave;
-(FBAdInterfacesPromotionDataModel *)dataModel;
-(BOOL)canShowInstagramPlacement;
-(void)editBudgetViewController:(id)arg1 didFinishWithBudget:(id)arg2 editExistingPromotion:(BOOL)arg3 ;
-(void)editScheduleViewController:(id)arg1 didFinishWithDuration:(unsigned long long)arg2 ;
-(void)setCanShowInstagramPlacement:(BOOL)arg1 ;
-(void)seeAdPreviewTapped:(id)arg1 ;
-(void)editBudgetTapped:(id)arg1 ;
-(void)editDurationTapped:(id)arg1 ;
-(id)initWithMessage:(id)arg1 logger:(id)arg2 promotionActionType:(unsigned long long)arg3 canShowInstagramPlacement:(BOOL)arg4 session:(id)arg5 delegate:(id)arg6 ;
-(id)footerButtonTitle;
-(BOOL)wereChangesMade;
-(BOOL)isCommitButtonEnabled;
-(void)setDelegate:(id<FBAdInterfacesActionConfirmationViewControllerDelegate>)arg1 ;
-(id<FBAdInterfacesActionConfirmationViewControllerDelegate>)delegate;
-(FBAdInterfacesMessage *)message;
-(void)setMessage:(FBAdInterfacesMessage *)arg1 ;
-(unsigned long long)sectionCount;
-(BOOL)shouldShowDoneButton;
@end
