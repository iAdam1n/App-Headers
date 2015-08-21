/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary;

@interface TFNTwitterCardRegistry : NSObject {

	NSDictionary* _cardMap;

}

@property (nonatomic,copy) NSDictionary * cardMap;              //@synthesize cardMap=_cardMap - In the implementation block
-(id)layoutDelegateForCardName:(id)arg1 displayMode:(long long)arg2 ;
-(id)cardViewForCardName:(id)arg1 ;
-(BOOL)isCardRegisteredForCardName:(id)arg1 status:(id)arg2 account:(id)arg3 displayMode:(long long)arg4 ;
-(void)setCardMap:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)cardMap;
@end

