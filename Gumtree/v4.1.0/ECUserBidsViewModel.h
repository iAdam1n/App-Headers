/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemListViewModel.h>

@protocol ECBiddingServiceProtocol;
@class ECNotificationObserver;

@interface ECUserBidsViewModel : ECItemListViewModel {

	id<ECBiddingServiceProtocol> _biddingService;
	ECNotificationObserver* _loginObserver;

}

@property (nonatomic,retain) id<ECBiddingServiceProtocol> biddingService;              //@synthesize biddingService=_biddingService - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * loginObserver;                   //@synthesize loginObserver=_loginObserver - In the implementation block
-(id)initWithDataProvider:(id)arg1 andDelegate:(id)arg2 ;
-(void)handleDeleteItemAtPosition:(id)arg1 requireConfirmation:(BOOL)arg2 ;
-(void)setLoginObserver:(ECNotificationObserver *)arg1 ;
-(ECNotificationObserver *)loginObserver;
-(void)continueWithDeletion:(id)arg1 ;
-(id<ECBiddingServiceProtocol>)biddingService;
-(void)setBiddingService:(id<ECBiddingServiceProtocol>)arg1 ;
-(void)handlePlacedBidNotification:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 biddingService:(id)arg2 andDelegate:(id)arg3 userManager:(id)arg4 ;
-(void)dealloc;
@end
