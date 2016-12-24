/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZRBaseDataFetcher.h>
#import <Messenger/FBRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol ZRCampaignDataFetcherDelegate;
@class NSDictionary, NSString;

@interface ZRCampaignDataFetcher : ZRBaseDataFetcher <FBRequestDelegate, FBClassProvidable> {

	id<ZRCampaignDataFetcherDelegate> _delegate;
	NSDictionary* _response;
	NSDictionary* _savedNetworkIdentifier;

}

@property (nonatomic,retain) NSDictionary * response;                                 //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSDictionary * savedNetworkIdentifier;                   //@synthesize savedNetworkIdentifier=_savedNetworkIdentifier - In the implementation block
@property (assign,nonatomic) id<ZRCampaignDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformResult:(id)arg1 networkIdentifier:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(void)sendNetworkIdentifier:(id)arg1 ;
-(void)doSend;
-(void)_cancelRequest;
-(void)setSavedNetworkIdentifier:(NSDictionary *)arg1 ;
-(void)doCancel;
-(NSDictionary *)savedNetworkIdentifier;
-(void)setDelegate:(id<ZRCampaignDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<ZRCampaignDataFetcherDelegate>)delegate;
-(NSDictionary *)response;
-(void)send;
-(void)setResponse:(NSDictionary *)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didSucceed;
@end
