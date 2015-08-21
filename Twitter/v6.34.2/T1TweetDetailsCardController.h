/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TCCardInstanceDelegate, T1TweetDetailsCardControllerDelegate;
@class TFNDownload, TFNTwitterStatus, TFNTwitterAccount, TCCardInstance;

@interface T1TweetDetailsCardController : NSObject {

	id<TCCardInstanceDelegate> _cardInstanceDelegate;
	TFNDownload* _cardDownload;
	BOOL _downloadedCard;
	id<T1TweetDetailsCardControllerDelegate> _delegate;
	TFNTwitterStatus* _status;
	TFNTwitterAccount* _account;
	TCCardInstance* _cardInstance;

}

@property (assign,nonatomic,__weak) id<T1TweetDetailsCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status;                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) TFNTwitterAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) TCCardInstance * cardInstance;                                       //@synthesize cardInstance=_cardInstance - In the implementation block
-(TCCardInstance *)cardInstance;
-(void)_cardDownloadDidChange;
-(void)_createCardInstanceFromData:(id)arg1 ;
-(void)_createCardInstanceFromJSON:(id)arg1 error:(id)arg2 ;
-(id)initWithStatus:(id)arg1 account:(id)arg2 cardInstanceDelegate:(id)arg3 ;
-(void)loadCardInstanceForCard:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<T1TweetDetailsCardControllerDelegate>)arg1 ;
-(id)init;
-(id<T1TweetDetailsCardControllerDelegate>)delegate;
-(TFNTwitterStatus *)status;
-(TFNTwitterAccount *)account;
-(void)dispose;
@end

