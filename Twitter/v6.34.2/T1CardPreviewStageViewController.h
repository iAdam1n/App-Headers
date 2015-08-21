/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNItemsDataViewController.h>
#import <Twitter/T1SlideshowViewControllerDelegate.h>
#import <Twitter/TCCardInstanceDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, TFNTwitterHTTPRequest, TFNItemsDataViewAdapter, TCCardInstance, T1CardSlideshowDataSource, NSString, NSArray, CTCallCenter, TFNHTTPRequest, TFNTwitterLegacyCard, TFNTwitterCardData, T1ComposeController;

@interface T1CardPreviewStageViewController : TFNItemsDataViewController <T1SlideshowViewControllerDelegate, TCCardInstanceDelegate, TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	TFNTwitterHTTPRequest* _cardDataRequest;
	unsigned long long _cardDataRequestRetryCount;
	TFNTwitterHTTPRequest* _cardRequest;
	TFNItemsDataViewAdapter* _cardItem;
	TCCardInstance* _cardInstance;
	T1CardSlideshowDataSource* _cardSlideshowDataSource;
	NSString* _cardErrorDescription;
	NSArray* _cardWarnings;
	CTCallCenter* _callCenter;
	/*^block*/id _callCenterCompletion;
	BOOL _callCenterDidCall;
	struct {
		unsigned cardDataRequested : 1;
		unsigned cardDownloaded : 1;
		unsigned inConstructSections : 1;
	}  _flags;
	TFNHTTPRequest* _cardTalonRequest;
	TFNTwitterLegacyCard* _card;
	TFNTwitterCardData* _cardData;
	NSString* _cardURL;
	T1ComposeController* _composeController;

}

@property (nonatomic,retain) TFNHTTPRequest * cardTalonRequest;                    //@synthesize cardTalonRequest=_cardTalonRequest - In the implementation block
@property (nonatomic,retain) TFNTwitterLegacyCard * card;                          //@synthesize card=_card - In the implementation block
@property (nonatomic,retain) TFNTwitterCardData * cardData;                        //@synthesize cardData=_cardData - In the implementation block
@property (nonatomic,copy) NSString * cardURL;                                     //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,retain) T1ComposeController * composeController;              //@synthesize composeController=_composeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                          //@synthesize account=_account - In the implementation block
-(TFNTwitterCardData *)cardData;
-(void)_createCardInstanceFromData:(id)arg1 ;
-(id)cardInstance:(id)arg1 userWithID:(long long)arg2 ;
-(void)cardInstanceNeedsLayout:(id)arg1 ;
-(void)cardInstance:(id)arg1 performAction:(id)arg2 onElement:(id)arg3 completion:(/*^block*/id)arg4 ;
-(float)cardInstance:(id)arg1 adjustedFontSizeForSize:(float)arg2 ;
-(long long)cardInstancePlayerType:(id)arg1 ;
-(void)cardInstanceDidPlayInlineMovie:(id)arg1 ;
-(void)cardInstance:(id)arg1 openPlayerURL:(id)arg2 ;
-(id)cardInstanceTwitterAccount:(id)arg1 ;
-(BOOL)showsSearchButton;
-(void)setCardData:(TFNTwitterCardData *)arg1 ;
-(void)_constructSections;
-(id)_constructCardItem;
-(id)_dividerWithTitle:(id)arg1 ;
-(void)_disposeCardInstance;
-(void)setCard:(TFNTwitterLegacyCard *)arg1 ;
-(void)_loadCardInstance;
-(TFNTwitterLegacyCard *)card;
-(void)setCardURL:(NSString *)arg1 ;
-(void)_retryLoadCardInstance;
-(TFNHTTPRequest *)cardTalonRequest;
-(void)setCardTalonRequest:(TFNHTTPRequest *)arg1 ;
-(void)_handleCardAction:(id)arg1 onElement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_cardOpenURLString:(id)arg1 ;
-(void)_logAction:(id)arg1 withMessage:(id)arg2 ;
-(id)cardSlideshowDataSource;
-(void)_presentSlideshowWithDataSource:(id)arg1 index:(long long)arg2 transitionDelegate:(id)arg3 ;
-(void)_cardOpenAppLink:(id)arg1 withTalonURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cardOpenDialPhoneURL:(id)arg1 withTalonURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_cardOpenAppLink:(id)arg1 withTalonURL:(id)arg2 verified:(BOOL)arg3 ;
-(void)_verifyTalonURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cardOpenDialPhoneURL:(id)arg1 withTalonURL:(id)arg2 verified:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_appDidActivateAfterCallNotification:(id)arg1 ;
-(BOOL)_isValidTalonURL:(id)arg1 ;
-(void)slideshow:(id)arg1 didSelectStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didDeleteStatus:(id)arg2 ;
-(void)slideshow:(id)arg1 didSelectUser:(id)arg2 ;
-(void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2 ;
-(BOOL)shouldAddStandardNavigationButtons;
-(id)viewControllerForCardInstance:(id)arg1 ;
-(void)cardInstanceDidStartAPIRequest:(id)arg1 ;
-(void)cardInstanceDidFinishAPIRequest:(id)arg1 succeeded:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reload:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSString *)cardURL;
-(T1ComposeController *)composeController;
-(void)setComposeController:(T1ComposeController *)arg1 ;
@end

