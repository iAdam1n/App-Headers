/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlurryActionDelegate;
@class NSURL;

@interface FlurryAdConnectionDelegate : NSObject {

	int _adAction;
	int _eventOnStartLoad;
	int _eventOnFinishLoad;
	NSURL* _referralURL;
	NSURL* _lastURL;
	id<FlurryActionDelegate> _actionDelegate;

}

@property (nonatomic,retain) NSURL * referralURL;                                  //@synthesize referralURL=_referralURL - In the implementation block
@property (nonatomic,retain) NSURL * lastURL;                                      //@synthesize lastURL=_lastURL - In the implementation block
@property (nonatomic,retain) id<FlurryActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) int adAction;                                         //@synthesize adAction=_adAction - In the implementation block
@property (assign,nonatomic) int eventOnStartLoad;                                 //@synthesize eventOnStartLoad=_eventOnStartLoad - In the implementation block
@property (assign,nonatomic) int eventOnFinishLoad;                                //@synthesize eventOnFinishLoad=_eventOnFinishLoad - In the implementation block
-(void)setAdAction:(int)arg1 ;
-(void)setEventOnStartLoad:(int)arg1 ;
-(void)setEventOnFinishLoad:(int)arg1 ;
-(void)setLastURL:(NSURL *)arg1 ;
-(int)eventOnStartLoad;
-(void)setReferralURL:(NSURL *)arg1 ;
-(NSURL *)lastURL;
-(int)adAction;
-(int)eventOnFinishLoad;
-(NSURL *)referralURL;
-(id)openReferralURL:(id)arg1 actionDelegate:(id)arg2 adAction:(int)arg3 eventOnStartLoad:(int)arg4 eventOnFinishLoad:(int)arg5 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setActionDelegate:(id<FlurryActionDelegate>)arg1 ;
-(id<FlurryActionDelegate>)actionDelegate;
@end
