/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardViewEventHandler.h>

@class TFNTwitterCardAPI, NSString;

@interface T1NativeTwoChoicePollEventHandler : NSObject <TFNTwitterCardViewEventHandler> {

	TFNTwitterCardAPI* _cardAPI;

}

@property (nonatomic,retain) TFNTwitterCardAPI * cardAPI;              //@synthesize cardAPI=_cardAPI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleViewEvent:(id)arg1 context:(id)arg2 ;
-(TFNTwitterCardAPI *)cardAPI;
-(void)setCardAPI:(TFNTwitterCardAPI *)arg1 ;
-(id)init;
@end

