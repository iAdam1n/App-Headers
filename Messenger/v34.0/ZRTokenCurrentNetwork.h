/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary;

@interface ZRTokenCurrentNetwork : NSObject {

	NSDictionary* _lastKnownNetworkIdentifier;

}

@property (copy) NSDictionary * lastKnownNetworkIdentifier;              //@synthesize lastKnownNetworkIdentifier=_lastKnownNetworkIdentifier - In the implementation block
+(id)_networkIdentifierForReachability:(id)arg1 ;
-(id)initWithReachability:(id)arg1 ;
-(NSDictionary *)lastKnownNetworkIdentifier;
-(void)setLastKnownNetworkIdentifier:(NSDictionary *)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)dealloc;
@end

