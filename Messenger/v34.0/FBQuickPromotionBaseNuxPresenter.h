/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNuxPresenter.h>

@protocol FBNuxDelegate;
@class FBQPPromotion, NSArray, FBUserSession, FBQuickPromotionServerContext, FBQuickPromotionEligibilityChecker, NSString, NSDictionary;

@interface FBQuickPromotionBaseNuxPresenter : NSObject <FBNuxPresenter> {

	id<FBNuxDelegate> _nuxCoordinator;
	FBQPPromotion* _displayedPromotion;
	NSArray* _promotions;
	FBUserSession* _session;
	FBQuickPromotionServerContext* _context;
	FBQuickPromotionEligibilityChecker* _eligibilityChecker;

}

@property (assign,nonatomic,__weak) id<FBNuxDelegate> nuxCoordinator;                              //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,retain) FBQPPromotion * displayedPromotion;                                   //@synthesize displayedPromotion=_displayedPromotion - In the implementation block
@property (nonatomic,copy) NSArray * promotions;                                                   //@synthesize promotions=_promotions - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBQuickPromotionServerContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FBQuickPromotionEligibilityChecker * eligibilityChecker;              //@synthesize eligibilityChecker=_eligibilityChecker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int nuxType; 
@property (nonatomic,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(int)nuxType;
-(unsigned long long)preferredPresentationMethod;
-(id)nuxID;
-(id)triggerIDs;
-(id<FBNuxDelegate>)nuxCoordinator;
-(NSArray *)promotions;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(Class)serverContextClass;
-(void)prepareWithServerContext:(id)arg1 ;
-(id)viewControllerForPresentation;
-(NSDictionary *)extraLogData;
-(NSString *)nuxAnalyticsModule;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(FBQPPromotion *)displayedPromotion;
-(void)setPromotions:(NSArray *)arg1 ;
-(id)bestPromotionForTrigger:(id)arg1 withContext:(id)arg2 ;
-(void)setDisplayedPromotion:(FBQPPromotion *)arg1 ;
-(FBQuickPromotionEligibilityChecker *)eligibilityChecker;
-(id)bestPromotionForTrigger:(id)arg1 ;
-(id)newBannerViewControllerWithContext:(id)arg1 ;
-(void)setEligibilityChecker:(FBQuickPromotionEligibilityChecker *)arg1 ;
-(id)init;
-(FBQuickPromotionServerContext *)context;
-(void)setContext:(FBQuickPromotionServerContext *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)versionID;
@end
