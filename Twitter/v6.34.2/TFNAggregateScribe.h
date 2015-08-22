/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSScribe.h>

@class TFSScribe;

@interface TFNAggregateScribe : TFSScribe {

	TFSScribe* _scribe;
	TFSScribe* _guestScribe;

}

@property (nonatomic,retain) TFSScribe * scribe;                   //@synthesize scribe=_scribe - In the implementation block
@property (nonatomic,retain) TFSScribe * guestScribe;              //@synthesize guestScribe=_guestScribe - In the implementation block
-(TFSScribe *)scribe;
-(TFSScribe *)guestScribe;
-(void)setScribe:(TFSScribe *)arg1 ;
-(void)setGuestScribe:(TFSScribe *)arg1 ;
-(void)enqueueImpression:(id)arg1 eventName:(id)arg2 query:(id)arg3 clientVersion:(id)arg4 group:(id)arg5 ;
-(void)enqueueEvent:(id)arg1 ;
@end
