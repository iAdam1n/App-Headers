/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableAttributedString, NSTimer;

@interface FBMNetworkMonitorView : UIView {

	UILabel* _networkLabel;
	UILabel* _messagingFetchMethodLabel;
	UILabel* _ligerLabel;
	NSMutableAttributedString* _fetchersText;
	NSTimer* _timer;
	BOOL _networkActivityVisible;

}

@property (assign,nonatomic) BOOL networkActivityVisible;              //@synthesize networkActivityVisible=_networkActivityVisible - In the implementation block
-(void)_didTimeout:(id)arg1 ;
-(void)setNetworkActivityVisible:(BOOL)arg1 ;
-(void)showFetcher:(id)arg1 type:(unsigned long long)arg2 ;
-(void)showMessagingFetchMethod:(unsigned long long)arg1 ;
-(void)showLigerEnabled:(BOOL)arg1 ;
-(BOOL)networkActivityVisible;
-(void)_ensureTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
