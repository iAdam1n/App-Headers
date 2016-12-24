/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBServiceTransactionMutating;
@class FBMemPageWelcomeHomeCardCell, NSString;

@interface FBMemPageWelcomeHomeCardController : FBMemPageCardController <FBCardViewProvider> {

	FBMemPageWelcomeHomeCardCell* _cardCell;
	NSString* _userFirstName;
	id<FBServiceTransactionMutating> _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 actionSource:(id)arg5 sourceID:(id)arg6 toolbox:(id)arg7 scenePath:(id)arg8 timelineHeaderTableView:(id)arg9 ;
-(BOOL)isViewerResidenceOwner;
-(UIView*<FBPageCardProtocol>)cardView;
-(void)_fetchName;
@end
