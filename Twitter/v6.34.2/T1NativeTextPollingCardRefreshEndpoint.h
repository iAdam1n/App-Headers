/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardAPICapiEndpoint.h>

@class NSString;

@interface T1NativeTextPollingCardRefreshEndpoint : TFNTwitterCardAPICapiEndpoint {

	NSString* _cardURI;
	NSString* _cardName;

}

@property (nonatomic,retain) NSString * cardURI;               //@synthesize cardURI=_cardURI - In the implementation block
@property (nonatomic,retain) NSString * cardName;              //@synthesize cardName=_cardName - In the implementation block
-(id)initWithCardContext:(id)arg1 ;
-(NSString *)cardURI;
-(void)setCardURI:(NSString *)arg1 ;
-(id)requestParameters;
-(NSString *)cardName;
-(void)setCardName:(NSString *)arg1 ;
@end

