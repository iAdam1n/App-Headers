/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ListingUIDelegate <NSObject,APIRequestProgressDelegate>
@optional
-(void)displayListingErrorWithResponse:(id)arg1;
-(void)displaySellingPhase:(id)arg1;
-(void)confirmListing:(id)arg1;
-(void)editingStartedWithDataManager:(id)arg1;
-(void)editingFinishedWithDataManager:(id)arg1;
-(void)photosUploadDidStart;
-(void)listingOperationStarted:(id)arg1;
-(void)listingOperationCompleted:(id)arg1;
-(void)photosUploadIncrementProgress;
-(void)willResetBundledGuidanceUserStateDueToTitleConditionCategoryChange;
-(void)photosUploadDidComplete;
-(void)photosUploadUserDidCancel;
-(void)photosUploadDidFailWithResponse:(id)arg1;
-(void)listingItemNeedsRedisplay;

@required
-(void)listingDraftVerifyDidFinishWitResult:(id)arg1;
-(void)listingDraftPublishDidFinishWitResult:(id)arg1;

@end

