/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBPageProductsComponentsEntryPointCellDelegate.h>
#import <Facebook/FBCommerceEventListener.h>
#import <Facebook/FBCardViewProvider.h>

@class FBPageProductsComponentsEntryPointCell, FBPageProductsSoldViewModel, FBCommerceLogger, FBCommerceEventListenerAnnouncer, NSString;

@interface FBMemPageProductsSoldCardController : FBMemPageCardController <FBPageProductsComponentsEntryPointCellDelegate, FBCommerceEventListener, FBCardViewProvider> {

	FBPageProductsComponentsEntryPointCell* _cardCell;
	FBPageProductsSoldViewModel* _viewModel;
	FBCommerceLogger* _logger;
	FBCommerceEventListenerAnnouncer* _announcer;
	BOOL _impressionsLogged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
+(id)storeFrontViewControllerFromPageWithSession:(id)arg1 pageID:(id)arg2 productID:(id)arg3 refID:(id)arg4 refType:(id)arg5 ;
+(id)storeCollectionFrontViewControllerFromPageWithSession:(id)arg1 page:(id)arg2 productID:(id)arg3 collectionID:(id)arg4 refID:(id)arg5 refType:(id)arg6 ;
-(void)configureWithPage:(id)arg1 ;
-(void)openStoreFrontFromPageWithContainerType:(id)arg1 index:(long long)arg2 refID:(id)arg3 refType:(id)arg4 ;
-(void)openShopEditView;
-(void)openProductEditView;
-(void)_openStoreFrontViewWithProductID:(id)arg1 attachmentID:(id)arg2 refID:(id)arg3 refType:(id)arg4 ;
-(void)openStoreFrontFromPageWithContainerType:(id)arg1 withProductID:(id)arg2 index:(long long)arg3 refID:(id)arg4 refType:(id)arg5 ;
-(void)_openProductDetailsPageWithProductID:(id)arg1 attachmentID:(id)arg2 refID:(id)arg3 refType:(id)arg4 ;
-(void)productsSoldViewAllProductsForView:(id)arg1 viewModel:(id)arg2 isFromSeeAllItemsUnit:(BOOL)arg3 ;
-(void)openStoreFrontFromPageWithContainerType:(id)arg1 withProductID:(id)arg2 attachmentID:(id)arg3 index:(long long)arg4 refID:(id)arg5 refType:(id)arg6 ;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end
