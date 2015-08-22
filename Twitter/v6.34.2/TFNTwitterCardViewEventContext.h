/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TFNTwitterCardEventLogger, TFNTwitterCardScribeContextProvider;
@class UIViewController, TFNTwitterCardContext, TFNTwitterStatus, TFNTwitterAccount, TFNTwitterCardData;

@interface TFNTwitterCardViewEventContext : NSObject {

	id<TFNTwitterCardEventLogger> _logger;
	UIViewController* _presentingViewController;
	id<TFNTwitterCardScribeContextProvider> _scribeContextProvider;
	TFNTwitterCardContext* _cardContext;

}

@property (nonatomic,readonly) id<TFNTwitterCardEventLogger> logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                         //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) id<TFNTwitterCardScribeContextProvider> scribeContextProvider;              //@synthesize scribeContextProvider=_scribeContextProvider - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status; 
@property (nonatomic,readonly) TFNTwitterAccount * account; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,readonly) TFNTwitterCardData * cardData; 
@property (nonatomic,retain) TFNTwitterCardContext * cardContext;                                          //@synthesize cardContext=_cardContext - In the implementation block
-(TFNTwitterCardData *)cardData;
-(TFNTwitterCardContext *)cardContext;
-(id<TFNTwitterCardScribeContextProvider>)scribeContextProvider;
-(void)setCardContext:(TFNTwitterCardContext *)arg1 ;
-(id)initWithCardContext:(id)arg1 scribeContextProvider:(id)arg2 logger:(id)arg3 presentingViewController:(id)arg4 ;
-(UIViewController *)presentingViewController;
-(long long)displayMode;
-(TFNTwitterStatus *)status;
-(TFNTwitterAccount *)account;
-(id<TFNTwitterCardEventLogger>)logger;
@end
